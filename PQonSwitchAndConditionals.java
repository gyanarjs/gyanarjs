import java.util.Scanner;
public class PQonSwitchAndConditionals {
    public static void main(String[] args) {
        // Question 2
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your marks in Physics");
        byte Pmarks = sc.nextByte();
        System.out.println("Enter your marks in Maths");
        byte Mmarks = sc.nextByte();
        System.out.println("Enter your marks in Chemistry");
        byte Cmarks = sc.nextByte();

        float avg = (Pmarks + Mmarks + Cmarks) / 3.0f;
        System.out.println("Your overall percentage is " + avg);
        if(avg >= 40 && Pmarks >= 33 && Mmarks >= 33 && Cmarks >= 33)
        {
            System.out.println("Congratulations, You have been promoted");
        }
        else
        {
            System.out.println("Better luck next time");
        }




    }
}
