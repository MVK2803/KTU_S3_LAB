import java.util.*;

class Matrix {
    int[][] data;
    int rows;
    int columns;

    Matrix(int x, int y) {
        rows = x;
        columns = y;
        data = new int[rows][columns];
    }

    void set(int[][] a) {
        this.data = a;
    }
    
    void display(Matrix a){
        int x[][]=a.data;
        for( int i=0;i<2;++i)
        {
            for(int j=0;j<3;++j)
            {
                System.out.println(x[i][j]);
            }
        }
        
    }
   
}

class Main {
    public static void main(String[] args) {
        Matrix a = new Matrix(2, 3);
        Matrix b = new Matrix(2, 3);
        int[][] values = { {1, 2, 3}, {1, 2, 3} };
        a.set(values);
        //a.display();
        b.set(values);
        //b.display();
        Matrix c= new Matrix(2,3);
        c.display(a);

    }
}
