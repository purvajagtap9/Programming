import java.util.Scanner;


class program147 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iCnt = 0;

        System.out.println("Enter size of an element: ");
        int iLength = sobj.nextInt();
        System.out.println("Enter the element: ");

        //Brr = (int*)malloc(sizeof(int)*iLength); //c mdhe

        int Brr[]=new int[iLength];

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           Brr[iCnt] = sobj.nextInt();
        }

    
        System.out.println("array elements before function call : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }
        
        ArrayX aobj = new ArrayX();  //object bnvyala lagla becoz static word kadla Arrayx mdhla

        aobj.Update(Brr);
   
        System.out.println("array elements after function call : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Brr = null;
        System.gc();

        }
}

class ArrayX
{
    public void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]++; 
        }

    }
}