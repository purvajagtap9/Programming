class program454
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);


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
    private node first;
    private int iCount;

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
            node temp = first;
            while(temp.next != null)    //type 2 
            {
                temp = temp.next;
            }
            temp.next = newn;    
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
