import java.util.*;

//Input : 11
//Output : * * * *  
//         * * * *
class program189
{
    public static void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();

        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();




    }
    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

       // System.out.println("Enter the no. of elements : ");

        //iValue = sobj.nextInt();

        Display();

    }
}