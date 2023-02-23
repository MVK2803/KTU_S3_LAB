interface A {
    int x = 10;
    void hello();
}

interface B {
    int y = 10;
    void hello2();
}

class C implements A, B {
    int z = 20;
    //while overrding the method frm an interface make sure it is always public 
    public void hello() {
        System.out.println("FROM A");
    }

    public void hello2() {
        System.out.println("FROM B");
    }
}

class interfaces{
    public static void main(String[] args) {
        C a = new C();
        a.hello(); // prints "FROM A"
        a.hello2(); // prints "FROM B"
    }
}
