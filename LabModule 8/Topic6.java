class Wordprocessor extends Thread
{
    public void run()
    {
        for(int i=0; i<10; i++)
        {
            System.out.println("Word processor is running");
        }
    }
}
class Musicplayer extends Thread
{
    public void run()
    {
        for(int i=0; i<10; i++)
        {
            System.out.println("Musicplayer is running");
        }
    }
}
class Realtimeclock extends Thread
{
    public void run()
    {
        for(int i=0; i<10; i++)
        {
            System.out.println("Timer is on");
        }
    }
}
public class Topic6 {
    public static void main(String[] args)
    {
        Wordprocessor word = new Wordprocessor();
        Musicplayer music = new Musicplayer();
        Realtimeclock timer = new Realtimeclock();
        word.start();
        music.start();
        timer.start();

    }
    
}
