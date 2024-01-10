public class PQ_Loops {
    public static void main(String[] args) {
        System.out.println("\"Klaus\"");

        // Question 1
        int n = 4;
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println("\r");
        }

        System.out.println("\n\n");


        // Question 2
        int sum =0;
        int n1 = 3;
        for (int i = 0; i < n1; i++) {
            sum = sum + (2*i);
            
        }
        System.out.print("Sum of even numbers is: ");
        System.out.println(sum);

        System.out.println("\n\n");


        // Question 3
         
        int n2 = 5;
        for (int i = 1; i <= 10; i++) {
            System.out.printf("%d X %d = %d\n", n2, i, n2*i);
        }

        System.out.println("\n\n");
        
        
        // Question 4

        int n3 = 10;
        for (int i = 10; i >= 1; i--) {
            System.out.printf("%d X %d = %d\n", n3, i, n3*i);
        }

        
    }
}
