import java.util.*;

//Input : 7
//Output : 1 * 2 * 3 * 4 
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
                //System.out.print(iCount+"\t");
                System.out.print(((iCnt/2)+1)+"\t");
                
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