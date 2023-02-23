import java.util.StringTokenizer;

public class strTokenizer {
    public static void main(String[] args) {
        String s=new String("1 2 3 4 5");
        StringTokenizer a =new StringTokenizer(s," ");
        while(a.hasMoreTokens())
        {
            System.out.println(Integer.parseInt(a.nextToken()));
        }
    }
}
