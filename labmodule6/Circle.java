class Circle{
    double r;

    Circle(double r){
        this.r=r;
    }

    double area(){
        return Math.PI*r*r;
    }

    public static void main(String[] args){
        Circle c=new Circle(5);
        System.out.println("Area="+c.area());
    }
}