class A
{
    A()
    {
        System.out.println("A created");
    }


}
class B extends A
{
    //super(A);

}
public class Topic41 {
    public static void main(String[] args)
    {
        A b = new B();

    }
    
}
