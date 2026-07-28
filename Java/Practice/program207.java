/*
iRow = User input 4
iCol = 4
O/p -  4 4 4 4 
       3 3 3 3
       2 2 2 2
       1 1 1 1

time complexity - O(n*n)  //36 times firnr
*/

import java.util.*;

class program207
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
        int iCount = 0;

        for(i = 1,iCount = iRow; i <= iRow; i++,iCount--)
        {
            for(j = 1;j <= iCol; j++)
            {
                System.out.print(iCount+"\t");
            }
            System.out.println();
        }
    }
}
