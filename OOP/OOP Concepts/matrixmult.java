public class matrixmult {
    public static void main(String[] args) {
        int ma=3,na=2,mb=2,nb=2;
        int a[][]=new int[ma][na];
        int b[][]=new int[mb][nb];
        int c[][]=new int[ma][nb];
        int i,j;
        
        for(i=0;i<ma;++i)
        {
            for(j=0;j<na;++j)
            {
                a[i][j]=1;
                
            }
        }
        for(i=0;i<mb;++i)
        {
            for(j=0;j<nb;++j)
            {
                b[i][j]=2;
                
            }
        }
        //matrix multiplication
        for( i=0;i<ma;++i)
        {
            for(j=0;j<nb;++j)
            {
                for(int k=0;k<na;++k)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<ma;++i)
        {
            for(j=0;j<nb;++j)
            {
                System.out.println(c[i][j]);
                
            }
        }
    }
    
}
