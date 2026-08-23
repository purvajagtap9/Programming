class program450
{
    public static void main(String A[])
    {
        node newn = new node(11);

        System.out.println(newn.data);
        System.out.println(newn.next);

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
