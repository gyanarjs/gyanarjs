public class ForLoop {
    public static void main(String[] args) {
        // for(int i = 0; i <= 10; i++)
        // {
        //     System.out.println(i);
        // }
        int n=5;
        for(int i = 0; i < n; i++)
        {
            System.out.println(2*i + 1);
        }

        System.out.println("Decrementing For Loop");
        for (int i1 = 5; i1 != 0; i1--) {
            System.out.println(i1);
            
        }
    }
}
