class A
{
    public static int x = 10;
    int y = 20;
    void display()
    {
        System.out.println("Non static: "+ y);
    }

    public static void show()
    {
        System.out.println("Static method: "+x);
    }
}
public class Topic2 
{
    public static void main(String[] args) 
    {
        A a = new A();
        a.display();
        a.show();
    }
    
}
