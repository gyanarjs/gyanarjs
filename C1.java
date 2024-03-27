
// Hierarachical Inheritance

//        [A]  showA()
//       /   \
//     [B]   [C] showA(), showC()
//      |
//      showA(), showB()

class A {
    void showA() {
        System.out.println("a class method");
    }
}

class B extends A {
    void showB() {
        System.out.println("b class method");
    }
}

class C1 extends A {

    void showC1() {
        System.out.println("c1 class method");
    }

    public static void main(String[] args) {
        
        // You can only call A
        A ob1 = new A();
        ob1.showA();
        
        System.out.println();

        // ou can only call A and B
        B ob2 = new B();
        ob2.showA();
        ob2.showB();

        System.out.println();


        // You can only call A and C
        C1 ob3 = new C1();
        ob3.showA();
        //ob3.showB();
        ob3.showC1();
    }

}
