
class shape
{
    void area(int a)
    {
        System.out.println("AREA OF SQAURE");
        System.out.println(a*a);
    
    }
    void area(int a,int b)
    {
        System.out.println("AREA OF RECTANGLE");
        System.out.println(a*b);
    
    }
    void area(float a)
    {
        System.out.println("AREA OF CIRCLE");
        System.out.println(a*a);
    
    }
    
}
public class overloading {
    public static void main(String[] args) {
        shape a =new shape();
        a.area(1);
        a.area(2, 3);
        a.area((float)7.8);

        
    }
}
