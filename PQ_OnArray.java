public class PQ_OnArray {
    public static void main(String[] args) {
        // float [] marks = {45.7f, 67.8f, 63,4f, 99.2f, 100.0f};
        // float sum = 0;
        // for (float element : marks) {
        //     sum = sum + element;

        // }
        // System.out.println("The value of sum is: " + sum);

        // PQ 3

        float [] marks = {45.7f, 67.8f, 63,4f, 99.2f, 100.0f};
        float num = 45.7f;
        boolean isInArray = false;
        for (float element : marks) {
            if (num == element) {
                isInArray = true;
                break;
            }

        }
        if (isInArray) {
            System.out.println("The value is present in the array");
            
        }
        else
        {
            System.out.println("The value is not present in the list");
        }


        


    }
}
