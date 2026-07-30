import java.util.*;

class program267 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = new String();   //reference

        System.out.println(str.length());   //starting 0

        System.out.println("Enter String : ");

        str = sobj.nextLine();

        System.out.println("Entered String is : "+str);

        System.out.println(str.length());

    }
}
