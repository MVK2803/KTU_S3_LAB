package Threads;
import java.util.*;
class t2 extends Thread
{int x;
 t2(int x)
 {this.x=x;

 }
 public void run()
 {
    System.out.println("EVEN"+x);
 }
}
class t3 extends Thread
{int x;
 t3(int x)
 {this.x=x;

 }
 public void run()
 {
    System.out.println("ODD"+x);
 }
}
class t1 extends Thread
{
    public void run()
    {
        Random rand = new Random();
        for (int i = 0; i < 5; i++) {
            int randomNum = rand.nextInt(100) ;
            if (randomNum%2==0)
            {
                t2 a =new t2(randomNum);
                a.start();

            }
            else
            {
                t3 a =new t3(randomNum);
                a.start(); 
            }
        }
        

    }
}
public class thread {
    public static void main(String[] args) {
        t1 b=new t1();
        b.start();

    }
    
}
