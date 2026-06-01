class words implements Runnable
{
    public void run()
    {
        for(int i=0; i<10; i++)
        System.out.println("Ms Word is running");
    }
}
class music implements Runnable
{
    public void run()
    {
        for(int i=0; i<10; i++)
        System.out.println("Music is playing");
    }

    
}
class timer implements Runnable
{
    public void run()
    {
        for(int i=0; i<10; i++)
        System.out.println("Time is ticking");
    }
}
public class Topic6runnable 
{
    public static void main(String[] args) 
    {
    words w = new words();
    Thread w1= new Thread(w);
    music m = new music();
    Thread m1 = new Thread(m);
    timer t = new timer();
    Thread t1 = new Thread(t);
    w1.start();
    m1.start();
    t1.start();
    }
    
}
