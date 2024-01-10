public class Method_Overloading {
    static void change(int a){
     a = 98;
    }
    static void change2(int [] arr)
    {
        arr[0] = 98;

    }
    static void foo()
    {
        System.out.println("Good Morning");
    }
    static void foo(int a)
    {
        System.out.println("I love you" +  " " + a + " " +" in every universe🤗!");
    }
    static void foo(int a , int b)
    {
        System.out.println("I love you" +  " " + a + " " +" in every universe🤗!");
        System.out.println("I love you" +  " " + b + " " +" in every universe🤗!");
    }
    static void tellJoke()
    {
        System.out.println("I have invented a new word!\n" + "Plagiarism!");
    }
    public static void main(String[] args) {
        //tellJoke();
        
    // Case 1 : Changing th intger
        // int x = 45;
        // change(x);
        // System.out.println("The value of x after running change is: " + x);
        int [] marks = {52, 73, 77, 89, 98, 94};
        change2(marks);
        System.out.println("The value of x after running change is: " + marks[0]);
        foo();
        foo(3000);
        foo(3000, 4000);
        
    }
}
