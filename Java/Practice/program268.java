import java.util.*;

class program268 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String str = null; // reference

        programStringX280 strobj = new programStringX280();  //object of class

        System.out.println("Enter String : ");

        str = sobj.nextLine();

        strobj.Display(str);

    }
}

class StringX 
{
    public void Display(String str) // method non static so need to create object
    {
        System.out.println("Recieved String is : "+str);
    }
}