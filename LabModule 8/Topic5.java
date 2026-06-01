class Singleton
{
    public static int count=0;
    private static Singleton[] instance= new Singleton[2];
    private Singleton()
    {
        count++;

    }
    public static Singleton getInstance()
    {
       if(count < 2)
       {
        instance[count] = new Singleton();
       }
        return instance[count];
    }
    public void show()
    {
        System.out.println("Singleton instance");
    }
}
public class Topic5
{
    public static void main(String[] args)
    {
        Singleton single1 = Singleton.getInstance();
        Singleton single2 = Singleton.getInstance();

        System.out.println(Singleton.count);
        System.out.println(single2.count);
        single1.show();

    }
    
}