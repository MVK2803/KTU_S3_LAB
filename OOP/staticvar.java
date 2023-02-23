class A
{
    int x;
    static int y;
}
class staticvar
{
    public static void main(String[] args) {
        A a =new A();
        A b=new A();
        a.x=10;
        b.x=20;
        a.y=200;
        System.out.printf("%d-%d",a.y,b.y);
        b.y=100;
        System.out.printf("%d-%d",a.y,b.y);
    }
}