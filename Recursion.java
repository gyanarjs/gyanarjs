import java.util.Scanner;
public class Recursion {
    static int factorial(int n)
    {
        // factorial(n) = n * n-1 * ....1
        // factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
        if (n==0 || n==1) {
            return 1;
        }
        else
        {
            return n * factorial(n-1);
        }


    }
    static int factorial_iterative(int n)
    {
        if (n==0 || n==1) {
            return 1;
        }
        else
        {
            int product = 1;
            for (int i = 1; i <= n; i++) {
                product *= i;
                
            }
            return product;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a = sc.nextInt();
        //int n = 4;
        System.out.println("The value of factorial a is: " + factorial(a));
        System.out.println("The value of factorial a is: " + factorial_iterative(a));
        
    }
}
