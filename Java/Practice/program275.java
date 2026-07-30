import java.util.*;
//github upload 
class program275
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

        iRet = strobj.CountDigits(data);
        System.out.println("Number of digits are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of spaces are : "+iRet);

        iRet = strobj.CountSpecials(data);
        System.out.println("Number of special symbols are : "+iRet);

    }
}

class StringX 
{
    public int CountCapital(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();   //string to array convert

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
        } 

        return iCount;
    }

    public int CountDigits(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= '0' && Arr[i] <= '9')
            {
                iCount++;
            }
        } 

        return iCount;
    }

    public int CountSpace(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        } 

        return iCount;
    }

    public int CountSpecials(String str) // method non static so need to create object
    {
        int i = 0,iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= '!' && Arr[i] <= '/') || 
               (Arr[i] >= ':' && Arr[i] <= '@') ||
               (Arr[i] >= '[' && Arr[i] <= '`') ||
               (Arr[i] >= '{' && Arr[i] <= '~'))
            {
                iCount++;
            }
        } 

        return iCount;
    }
}