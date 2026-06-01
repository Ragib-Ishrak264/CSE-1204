class A
{
    int x;
    public A()
    {
        x=0;
    }
    public A(int x)
    {
    this.x=x;
    }
    public int getX()
    {
    return(x+10);
    }
}
class B extends A
{
    int x=20;
    public int getX()
    {
    return(x+10);
    }
    public int getXa()
    {
        return super.x;

    }
    public void show()
    {
        System.out.println(super.getX());
    }
    B(int x)
    {
        super(x);
        System.out.println("Super Parameterized Constructor");

    }
}
public class First
{
public static void main(String[] args) 
{

    B b = new B(10);
    System.out.println(b.getXa());
    System.out.println(b.getX());
    b.show();
}
}