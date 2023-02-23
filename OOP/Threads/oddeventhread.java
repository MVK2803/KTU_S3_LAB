package Threads;
class odd extends Thread
{
 Printer p;
 odd(Printer p)
    {
        this.p=p;
    }
    public void run()
    {
        p.print(1);
    }
}
class Printer
{
   
   synchronized void print(int n)
   {
    if (n==0)
    {
        for(int i=0;i<=100;i+=2)
        {
            System.out.printf("%d ",i);
            try{
            Thread.sleep(100);}
            catch(Exception e)
            {

            }
        }
        System.out.printf("\n");
    }
    else
    {
        for(int i=1;i<100;i+=2)
        {
            System.out.printf("%d ",i);
            try{
                Thread.sleep(50);}
                catch(Exception e)
                {
                    
                }
        }

    }
   }
}
class even extends Thread
{   
    Printer p;
    even(Printer p){
        this.p=p;
    }
    public void run()
    {
        p.print(0);
    }
}
public class oddeventhread {
    public static void main(String[] args) {
        Printer p=new Printer();
        even e=new even(p);
        odd o=new odd(p);
        e.start();
        o.start();
        Thread t=Thread.currentThread();
        System.out.println(t.getPriority()+""+t.getName());
    }
}
