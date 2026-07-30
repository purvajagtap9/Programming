import java.util.*;
 
class program287
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String data = null; //original vali

        StringX strobj = new StringX();  //object of class

        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);

        System.out.println("Updated string is : "+sRet);

        sRet = strobj.toLowerX(data);

        System.out.println("Updated string is : "+sRet);
    }
}

class StringX 
{
    public String toUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length;i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Arr[i]=(char)(Arr[i] - 32);  
            }
        }

        return new String(Arr); 
    }

    public String toLowerX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length;i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i]=(char)(Arr[i] + 32);  
            }
        }

        return new String(Arr); 
    }
}