public class AssocitivityInOperators {
    public static void main(String[] args) {
        // Precedence & Associativity
        //int a = 6*5-34/2;
        /* 
         Highest Presedence goes to * and /. They are then evaluated on the basis of left to right associtivity

        = 30 - 17
        = 13
        */

        //int b = 60/5 - 34*2;
        /*


        = 12 - 34*2
        = 12 - 68
        = - 56

         */


         int x = 6;
         int y = 1;
         int k = x * y/2;
         System.out.println(k);

         int a = 5;
         int b = 1;
         int c = 4;
         int k1 = b*b - (4*a*c)/(2*a);
         System.out.println(k1);






    }
}
