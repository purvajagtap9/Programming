import java.util.*;

class program270 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String data = null; // reference

        int iRet = 0;

        StringX strobj = new StringX();  //object of class

        System.out.println("Enter String : ");

        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of capital letters are : "+iRet);

    }
}

class StringX 
{
    public int CountCapital(String str) // method non static so need to create object
    {
        int i = 0;
        int iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}