class A
{
int x;
public A(){
x=0;
}
public A(int x){
this.x=x;
}

public int getX(){
return(x+10);
}


class B extends A{
int x=20;
public int getX()
{
return(x+10);
}
void displayA()
{
    System.out.println(super.x);
}
void getxA()
{
    System.out.println(super.getx());
}

}
public class Super
{
public static void main(String[] args) 
{
}
}