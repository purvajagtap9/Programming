import java.util.*;

class program92
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = dobj.ReverseNumbers(iValue);

        System.out.println("Reverse Digits are : "+iRet);
    }
}

class DigitX
{
    public int ReverseNumbers(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev*10) + iDigit;
            iNo = iNo / 10;
        }

        return iRev;
    }
} 