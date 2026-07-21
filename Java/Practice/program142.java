import java.util.*;

class program142
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iCnt = 0;

        System.out.println("Enter the size of an element : ");
        int iLength = sobj.nextInt();  

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt]=sobj.nextInt(); //input gheun store honr ekek index laa
        }

        System.out.println("Elements of the array are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

        Brr = null;
        System.gc();  

    }
    
}
