class Test {

    private void showMessage() {
        System.out.println("This is a private method.");
    }

    public void display() {
        showMessage(); 
    }

    public static void main(String[] args) {
        Test obj = new Test();
        obj.display();
    }
}
