/*
iRow = User input 4
iCol = 4
O/p -
        a
        b       c
        d       e       f
        g       h       i       j
time complexity - O(n*n)  //36 times firnr
*/

import java.util.*;

class program227
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
        char ch ='a';

        //Filter for diagonal patterns 
        if(iRow != iCol)
        {
            System.out.println("Invalid parameters");
            System.out.println("Number of rows and columns should be equal/same.");
            return;
        }

        for(i = 1,ch='a' ; i <= iRow; i++)  
        {
            for(j = 1;j <= i; j++,ch++)
            {
                    System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}
