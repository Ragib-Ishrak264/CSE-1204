 class A {
    int x;

    A() {
        x = 10;
    }

    A(int x) {
        this.x = x;
    }

    int getX() {
        return x;
    }
}

class B extends A {
    int y;

    B() {
        super();
        y = 20;
    }

    B(int x, int y) {
        super(x); 
        this.y = y;
    }

    void show() {
    
        System.out.println("x from class A: " + super.x);

        
        System.out.println("getX() from class A: " + super.getX());

        
        System.out.println("y from class B: " + y);
    }
}

public class Main {
    public static void main(String[] args) {
        B obj1 = new B();          
        obj1.show();

        System.out.println();

        B obj2 = new B(50, 100);  
        obj2.show();
    }
}
