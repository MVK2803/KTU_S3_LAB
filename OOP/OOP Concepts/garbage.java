public class garbage {
    public void finalize()
    {
        System.out.println("GARBAGE REMOVED");
    }
    public static void main(String[] args) {
        garbage g=new garbage();
        g=null;
        System.gc();
    }
}
