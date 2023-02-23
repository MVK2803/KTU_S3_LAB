class person
{
    String name;
    int age;
    int salary=100;
    void Sal(int x)
    {
        System.out.println(x);
    }
}
class Person1 extends person
{
    int salary=2000;
    String sec;

}
class Person2 extends person
{
    int salary=3000;
    String sec;
}
class inheritance
{
    public static void main(String[] args) {
        person a=new person();
        a.age=10;
        a.name="MATHEW";
        
        a.salary=20000;
        //System.out.printf("%d %s",a.age,a.name);
        Person1 b=new Person1();
        Person2 c=new Person2();
        c.age=2000;
        
        
        
    }
}