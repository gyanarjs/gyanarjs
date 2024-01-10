public class Break_And_Continue {
    public static void main(String[] args) {
        // Break and continue using loops
        for (int i = 0; i < 5; i++) {
            if (i == 2) {
                System.out.println("Ending the loop");
                continue;
            }
            System.out.println(i);
            System.out.println("Java is great");
        }
        System.out.println("Loop end here");
    }
}
