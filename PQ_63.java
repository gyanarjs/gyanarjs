public class PQ_63 {
    public static void main(String[] args) {
        int [] arr = {1, 21, 3, 455, 5, 34, 67};
        int max = 0;
        for (int e : arr) {
            if (e>max) {
                max = e;

            }
        }
        System.out.println("The value of maximum element in this array is: " + max);
    }
}
