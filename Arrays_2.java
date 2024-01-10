public class Arrays_2 {
    public static void main(String[] args) {
        // int [] marks = {98, 45, 79, 99, 80};
        /*
        String [] students = {"Elijah", "Klaus", "Rebekah", "Haley"};
        System.out.println(students.length);
        System.out.println(students[2]);
        */
        
        //float [] marks = {98.1f, 45.7f, 79.5f, 99.5f, 80.5f};
        //System.out.println(marks.length);
        //System.out.println(marks[0]);
        int [] marks = {98, 45, 79, 99, 80};
        for (int i = 0; i < marks.length; i++) {
            System.out.println(marks[i]);
            
        }
        System.out.println("Printing the array in reverse order");
        for (int i = marks.length - 1; i >= 0; i--) {
            System.out.println(marks[i]);
        }

        System.out.println("Displaying the array using for-each loop");

        // Displaying the array (fir-each loop)
        for (int element : marks) {
            System.out.println(element);
        }


       

    }
}
