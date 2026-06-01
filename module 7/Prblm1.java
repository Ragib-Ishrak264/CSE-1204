class Prblm1 {

    public void showMessage() {
        System.out.println("Private Method");
    }
}

class Demo {
    public static void main(String[] args) {
        Prblm1 obj = new Prblm1();
        obj.showMessage();
    }
}
