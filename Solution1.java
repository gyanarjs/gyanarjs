import java.util.Scanner;
public class Solution1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your Physics marks: ");
        int physics = scanner.nextInt();
        System.out.println("Enter your Chemistry marks: ");
        int chemistry = scanner.nextInt();
        System.out.println("Enter your English marks: ");
        int english = scanner.nextInt();
        System.out.println("Enter your Computer marks: ");
        int computer = scanner.nextInt();
        System.out.println("Enter your Mathematics marks: ");
        int mathematics = scanner.nextInt();
        

        float percentage = ((physics + mathematics + english + chemistry + computer) / 500.0f) * 100;
        System.out.println("pecentage: ");
        System.out.println(percentage);
        
    }
}
