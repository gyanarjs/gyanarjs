public class PQ_OnJava {
    static void multiplication(int n)
    {
        for(int i = 1; i <= 10; i++)
        {
            System.out.format("%d X %d = %d\n", n , i, n*i);
        }
        System.out.println("\n");
    }
    public static void main(String[] args) {
        multiplication(7);
        
    }
}
