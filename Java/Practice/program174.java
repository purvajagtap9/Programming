import java.util.*;

//Input : 5
//Output : * # *  # *  # *  # * #
class program172
{
    public static void Display(int iNo)
    {

        int iCnt = 0;
        for(iCnt = 1; iCnt <=iNo; iCnt++)
        {
            System.out.print("*\t#\t");
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