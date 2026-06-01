interface Al
{
     void printA();
}
interface Bl 
{
    void printB();

    
}
interface Cl
{
    void printC();

    
}
class A implements Al
{
    @Override
    public void printA()
    {
        System.out.println("Print A");
    }

}
class B extends A implements Bl
{
    public void printB()
    {
        System.out.println("Print B");
    }

}
class C extends B implements Cl
{
    public void printC()
    {
        System.out.println("Print C");
    }
}
public class interfacejava 
{
    public static void main(String[] args)
    {
    C obj = new C();
    obj.printA();
    obj.printB();
    obj.printC();
    }
    
}
