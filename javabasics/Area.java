class Circle
{
    float radius;
    Circle(int radius)
    {
        this.radius=radius;
    }
    void area()
    {
        float area = (float)(3.1416*radius*radius);
        System.out.println(area);
    }

}
public class Area 
{
    public static void main(String[] args)
    {
        Circle c1 = new Circle(5);
        c1.area();
    }

    
}
