import java.util.Scanner;

class program65
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");

        iValue = sobj.nextInt();
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("It is prime number");
        }
        else
        {
            System.out.println("It is NOT a prime number");
        }
    }
}

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                return false;
            }
        }

        if(iCnt > (iNo/2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}