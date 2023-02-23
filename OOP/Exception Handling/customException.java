import java.util.Scanner;
class myexp extends Exception
{
    myexp()
    {
        super("AGE OVER");
    }
}
public class customException {
    static void validate (int x) throws myexp
    {
        if (x<18)
        {
            throw new myexp();
        }
        else{
            System.out.println("ELIGIBLE");
        }
    }
    public static void main(String[] args) {
        int x;
        System.out.println("ENTER AGE");
        Scanner sc =new Scanner(System.in);
        x=sc.nextInt();
        try
        {
            validate(x);
        }
        catch(Exception e)
        {
                System.out.println(e);
        }
    }
}
