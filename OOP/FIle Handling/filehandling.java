import java.util.*;
import java.io.File;
import java.io.FileWriter;
//program that take name seperated with spac from one file and copy th ename in reverse to next file
public class filehandling {
    public static void main(String[] args) {


        try
        {
            
            File a=new File("a.txt");
            Scanner sc=new Scanner(a);
            String [] names=(sc.nextLine()).split(" ");
            sc.close();
            FileWriter fw=new FileWriter("b.txt");
            for(int i=0;i<names.length;++i)
            {
                StringBuffer bs=new StringBuffer(names[i]);
                names[i]=bs.reverse().toString();
                fw.write(names[i]);
                fw.write(" ");
                
            }
            fw.close();

            
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        
    }
    
}
