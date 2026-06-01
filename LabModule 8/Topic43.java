interface a
{
    void show();
}
interface b extends a {
    @Override
    default void show()
    {
        System.out.println("extened from a");


    }
}
public class Topic43 {
    public static void main(String[] args) {
        b obj = new b() {};
        obj.show();
    }
    
}
