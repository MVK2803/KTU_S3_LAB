import java.util.*;
import java.lang.*;

public class exceptionHandling {
    public static void main(String[] args)throws ArithmeticException,IndexOutOfBoundsException {
        try
        {
            System.out.println(10/1);
            throw new IndexOutOfBoundsException();
        }
        catch(Exception e)
        {
            System.out.println(e);
            
        }
       
        finally
        {
            System.out.println("INSIDE FINALLY");

        }
        System.out.println("OUTSIDE FINALLY");
    }
    
}
