import java.util.*;

class program271
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

        iRet = strobj.CountSmall(data);
        System.out.println("Number of small letters are : "+iRet);

    }
}

class StringX 
{
    public int CountCapital(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        for(i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                iCount++;
            }
        } 

        return iCount;
    }
}