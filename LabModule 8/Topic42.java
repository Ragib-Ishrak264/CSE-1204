interface A
{
    void show();


}
class B implements A
{
    @Override
    public void show()
    {
        System.out.println("Implemnetd from A");
    }

}

public class Topic42 {
    public static void main(String[] args) {
        B a = new B();
        a.show();
    }
    
}
