class program451
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
    }
    
}

class node 
{
    public int data;
    public node next;

    node(int no)        //parameterized const
    {
        this.data = no;
        this.next = null;
    
    }
}


class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()     //constructor
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }
}
