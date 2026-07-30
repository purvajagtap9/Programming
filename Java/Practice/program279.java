import java.util.*;
 
class program279
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String data = null; //original vali

        StringX strobj = new StringX();  //object of class

        String sRet = null;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.Update(data);

        System.out.println("Updated string is : "+sRet);
    }
}

class StringX 
{
    public String Update(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length;i++)
        {
            if(Arr[i] == 'A' || Arr[i] == 'a')
            {
                Arr[i] = '_';
            }
        }

        return new String(Arr); //
    }
}