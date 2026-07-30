import java.util.*;

class program265
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String Arr = null; //arr name cha reference

        System.out.println("Enter String : ");

        Arr = sobj.nextLine();

        System.out.println("Length of String is : "+Arr.length());

        char str[] = Arr.toCharArray();
        int i = 0;

        for(i = 0; i < str.length; i++)
        {
            System.out.println(str[i]);
        }
        
    }
}