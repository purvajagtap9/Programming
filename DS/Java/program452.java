class program452
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

    public void Display()
    {}

    public int Count()
    {
        return iCount;
    }
    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);
        
        if(first == null)
        {
            first = newn;
        }
        else 
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        
        if(first == null)
        {
            first = newn;
        }
        else 
        {
            
        }

        iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {

    }

    public void DeleteFirst()
    {

    }

    public void DeleteLast()
    {
        
    }

    public void DeleteAtPos(int iPos)
    {
        
    }


}
