class Point 
{
    int x;
    int y;
    Point(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    void display()
    {
        System.out.println("Point("+x+","+y+")");
    }
    
}
public class Annonymous 
{
    static Point getpoint(int a,int b)
    {
        return new Point(a,b);
    }

    public static void main(String[] args)
    {
        Point pt = getpoint(10,5);
        System.out.println(pt.x);
        System.out.println(pt.y);
        new Point(10,10).display();
        
    }
}
