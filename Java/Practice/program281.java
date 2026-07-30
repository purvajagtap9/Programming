import java.util.*;
 
class program281
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
            Arr[i]=Arr[i] - 32; //ERROR
        }

        return new String(Arr); 
    }
}