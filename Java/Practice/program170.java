import java.util.*;

class program170
{
    public static void main(String A [])
    {
        Scanner sc = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements :");
        iLength = sc.nextInt();

        ArrayXX aobj = new ArrayXX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation is : " + iRet);
    }
}

class ArrayXX
{ 
        private int Arr[]; 
        private int iSize; 

        Scanner sc = new Scanner(System.in);

    public ArrayXX()
        {   
            this(5);  //default size = 5 zhli
        }

    public ArrayXX(int size)
    {
        this.iSize = size;
        this.Arr = new int[iSize];
    }

    public void Accept()
        {
            int iCnt = 0;
            System.out.println("Enter the elements :");

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                Arr[iCnt] = sc.nextInt();
            }
        }

    public void Display()
        {
            int iCnt = 0;
            System.out.println("Elements of the array are :");

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
        }

    public int Summation()   //ithe changes kru shkto functions veg-vegle
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

}

