public class Logical {
    public static void main(String[] args) {
        boolean a = true;
        boolean b = true;
        boolean c = false;
        if (a && b){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }


        System.out.println("For logical Or");
        if (a || c) {
            System.out.println("T");
        }
        else
        {
            System.out.println("N");
        }

        System.out.println("For Logical NOT");
        System.out.print("Not(a) is ");
        System.out.println(!a);
        System.out.print("Not(b) is ");
        System.out.println(!b);
    }
    
}
