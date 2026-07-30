import java.util.*;
import Marvellous.StringX;

class program276
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String data = null; // reference
        int iRet = 0;
        StringX strobj = new StringX();  

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of capital letters are : "+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of small letters are : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of digits are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of spaces are : "+iRet);

        iRet = strobj.CountSpecials(data);
        System.out.println("Number of special symbols are : "+iRet);

    }
}

