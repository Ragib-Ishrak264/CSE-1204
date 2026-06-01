 class Point {
    int x;
    int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void showPoint() {
        System.out.println("X = " + x + ", Y = " + y);
    }
}

public class Mainpoint {

    static Point getPoint() {
        return new Point(5, 10);
    }

    public static void main(String[] args) {
        getPoint().showPoint(); 
    }
}

