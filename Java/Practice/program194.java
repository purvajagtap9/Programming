import java.util.*;

//Input : irow 4,icol 4
//Output : 1 1 1 1  
//         2 2 2 2 
//         3 3 3 3   
//         4 4 4 4 
class program194
{
    public static void Display(int iRow,int iCol)
    {
        int i = 0;  //bahercha counter row
        int j = 0;  //aatla counter column

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            System.out.print(i+"\t");   //j chya jagi i takych
        }
        System.out.println();
    }

    }
    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;  //row
        int iValue2 = 0;  //columns


        System.out.println("Enter the no. of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the no. of Columns : ");
        iValue2 = sobj.nextInt();

        Display(iValue1,iValue2);

    }
}