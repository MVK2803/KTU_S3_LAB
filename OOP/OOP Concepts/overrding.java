class Employee
{
    int sal=1000;
    void display()
    {
        System.out.println("INSIDE EMPLOYEE");
    }
    void printer()
        {System.out.println("SALARY="+sal);}
}
class manageer extends Employee
{   int sal=200000;
    void display()
    {
        System.out.println("INSIDE MANAGEER");
    }
    void printer()
        {   super.printer();
            System.out.println("SALARY="+sal);}
}
public class overrding {
    public static void main(String[] args) {
        Employee a=new Employee();
        a.display();
        a.printer();
        manageer b=new manageer();
        b.display();
        b.printer();
        
    }
}