interface A
{
    void showA();
}
interface B
{
    void showB();
}
interface C extends A,B
{
    @Override
    default void showA()
    {
        System.out.println("From A");


    }
    @Override
    default void showB()
    {
        System.out.println("From B");
    }
}
public class topic45 {
    public static void main(String[] args)
    {
        C c = new C(){};
        c.showA();
        c.showB();
    }
    
}
