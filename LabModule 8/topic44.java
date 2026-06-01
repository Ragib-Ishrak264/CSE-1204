interface A{
    void show();
}
interface B{
    void display();
}
class C implements A,B
{
    @Override
    public void show()
    {
        System.out.println("From a");

    }
    @Override
    public void display()
    {
        System.out.println("From b");
    }
}
public class topic44 {
    public static void main(String[] args)
    {
        C c = new C();
        c.show();
        c.display();

    }
    
}
