class Friend
{
    String name;
    static int serial;
    Friend(String name)
    {
        this.name=name;
        serial++;
    }
    static void dsiplay1()
    {
        //System.out.println(name);
    }
    static void display2()
    {
        System.out.println(serial);
    }
}
public class staticmethod {
    public static void main(String[] args)
    {
        Friend f1 = new Friend("Satu");
        Friend f2 = new Friend("Rafi");
        System.out.println(f1.name);
        System.out.println(Friend.serial);
        //f2.display1();
        Friend.display2();


    }
    
}
