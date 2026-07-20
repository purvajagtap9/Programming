import java.util.Scanner;

class program68
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
            if((iNo % iCnt) == 0)
            {
                return false;      //Bad programming
            }
        }

            return true;
    }

}


//Time Complexity : O(N/2)
//Where N>= 0

/*

101010001001
1010110001001
001010001001
10101100010001          ----> return false (last bit 1 asel tr false) 
0010110001001
101011000101
001010001001
1001010001001

*/