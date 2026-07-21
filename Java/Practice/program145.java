import java.util.Scanner;

class program145 
{
    public static void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]++; 
        }

    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iCnt = 0;

        System.out.println("Enter size of an element: ");
        int iLength = sobj.nextInt();
        System.out.println("Enter the element: ");

        int Brr[]=new int[iLength];

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           Brr[iCnt] = sobj.nextInt();
        }

    
        System.out.println("array elements before function call :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }
        
        Update(Brr);
   
        System.out.println("array elements after function call : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Brr = null;
        System.gc();

        }

    

}
