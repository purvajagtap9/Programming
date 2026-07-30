import java.util.*;

class program269 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String data = null; // reference

        StringX strobj = new StringX();  //object of class

        System.out.println("Enter String : ");

        data = sobj.nextLine();

        strobj.Display(data);

    }
}

class StringX 
{
    public void Display(String str) // method non static so need to create object
    {
        System.out.println("Recieved String is : "+str);
    }
}