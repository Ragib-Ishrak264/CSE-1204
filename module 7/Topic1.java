class A
{
    private void show()
    {
        System.out.println("Private Method");
    }
    public void display()
    {
        System.out.println("Withen class");
        show();
    }

}
public class Topic1 
{
    public static void main(String[] args) 
    {
        A a = new A();
        a.display();
        //a.show();   
    }
}
