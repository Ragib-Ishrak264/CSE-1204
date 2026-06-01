
class method
{
    int a;
    int b;
    method(int a, int b)
    {
        this.a=a;
        this.b=b;
    }
    private int sum1()
    {
        return a+b;
    }
    public int sum2()
    {
        return a+b;
    }
}
public class methodcheck
{
    public static void main(String[] args)
    {
        method m = new method(10,5);
        System.out.println(m.sum2());
        System.out.println(m.sum1());
        
    }
    
}