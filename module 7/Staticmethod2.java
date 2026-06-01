class Staticmethod2 {

    static int a = 10;
    int b = 20;

    static void show() {
        System.out.println("Static variable: " + a);
    }

    void display() {
        System.out.println("Non-static variable: " + b);
    }

    public static void main(String[] args) {
        show();
    }
}
