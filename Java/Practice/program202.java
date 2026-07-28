/*
iRow = 4
iCol = 4
O/p -   $ $ $ $
        # # # #
        $ $ $ $
        # # # #

time complexity - O(n*n)  //36 times firnr
*/

import java.util.*;

class program202
{
    public static void main(String A []) 
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no. of rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter no. of column :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();  //object creation becoz ha class seperate ahe

        pobj.Display(iValue1, iValue2);


    }
}

class Pattern  //non static 
{
    public void Display(int iRow,int iCol)
    {
        int i = 0,j = 0;
        char Arr[] = {'#','$'};  //0 index =# even , 1=$ odd

        for(i = 1;i <= iRow; i++)  //i%2 = 1%2 = 1 its odd then #, 2%2 = 0 its even -#
        {
            for(j = 1;j <= iCol; j++)
            {
                System.out.print(Arr[i%2]+"\t");
            }
            System.out.println();
        }
    }
}