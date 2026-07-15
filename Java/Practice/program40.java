//Type 2

import java.util.Scanner;

class program40 
{
    public static void main(String A[])
    {
        void CheckDivsible(int iNo)
        if((iValue % 3 == 0) && (iValue % 5 == 0))
            {
                System.out.println("It is divisible by both 3 and 5");
            }
            else
            {
                System.out.println("It is not divisible by both 3 and 5");
            }

    public static void main (String A[])
        {
            Scanner sobj = new Scanner(System.in);

            int iValue = 0;

            System.out.println("Enter number : ");

            iValue = sobj.nextInt();

            CheckDivsible(iValue);    //Error : Non static method cannot be called from static area beacuse of line number 6 the method is non static and line number 17 is static area. To resolve this error we have to make method as static or create object of class and call the method using that object.

        }
            
    }
    
}
