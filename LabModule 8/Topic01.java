class Point
{
    int x;
    int y;
    Point(int x, int y)
    {
        this.x=x;
        this.y=y;
    }
    public static Point getPoint(int x, int y)
    {

        return new Point(x, y);

    }
    public void display()
    {
        System.out.println("Point("+x+","+y+")");
    }
}
public class Topic01 {
    public static void main(String[] args) {
        Point pt = Point.getPoint(5,10);
        pt.display();

    }
    
}
