import java.util.*;

//Input : 7
//Output : 1 *  3 * 5 * 7
class program172
{
    public static void Display(int iNo)
    {

        int iCnt = 0;
        for(iCnt = 1; iCnt <=iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
             System.out.println();
        }

        System.out.println();


    }
    public static void main(String A [])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the no. of elements : ");

        iValue = sobj.nextInt();

        Display(iValue);

    }
}