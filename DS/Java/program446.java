class program446
{
    public static void main(String A[])
    {
        node head = null;

        node obj1 = null;    //references
        node obj2 = null;
        node obj3 = null;

        obj1 = new node();
        obj2 = new node();
        obj3 = new node();   //memory allocated now

        obj1.data = 11;
        obj2.data = 21;
        obj3.data = 51;

        obj1.next = obj2;
        obj2.next = obj3;
        obj3.next = null;

        head = obj1;   
 
        System.out.println(head.data);      //11 
        System.out.println(head.next.data);  //21
        System.out.println(head.next.next.data);   //51

    }
    
}
class node 
{
    public int data;
    public node next;
}
