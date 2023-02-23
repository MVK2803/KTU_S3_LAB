import java.util.*;
public class palindrome {
    
    public static void main(String args[]) {
        String s=new String("ABBA");

        boolean flag=true;
        for(int i=0,j=s.length()-1;i<j;++i,--j)
        {
            if (s.charAt(i)!=s.charAt(j))
            { 
                flag=false;
                
            }
        }
        if (flag==false)
        {
            System.out.println("NOT");

        }
        else{
            System.out.println("YES");
        }
     }
    }

