public class Var_Args {
    // static int sum(int a, int b)
    // {
    //     return a + b;

    // }
    // static int sum(int a, int b, int c)
    // {
    //     return a + b + c;
    // }
    static int sum(int x, int ...arr)
    {
       int result = x;
       for (int a : arr) {
        result += a;
        
       }
       return result;
    }
    public static void main(String[] args) {
     System.out.println("Welcome to Varargs");
     System.out.println("the sum of 1 is: " + sum(1));
     System.out.println("The sum of 4 and 5 is: " + sum(4, 5));
     System.out.println("The sum of a, b and c is : " + sum(4, 5, 3));
     System.out.println("The sum of a, b, c, and d is: " + sum(1, 45, 55, 65));

        
    }
}
