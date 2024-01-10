public class DataType {

    public static void main(String[] args) {
        byte x = 5;
        int y = 6;
        short z = 8;
        int a = y + z;
        float b = 6.54f + x;
        System.out.println(b);
        System.err.println(a);


        // Increment and Decrement Operator 
        int i = 56;
        // int b = i++; // first b is assigned i(56) then i is incremented
        int j = 67;
        int c = ++j; // first j is incremented then c is assigned j(67)
        System.out.println(i++);
        System.out.println(i);
        System.out.println(++i);
        System.out.println(i);
        System.out.println(c);

        int y1 = 7;
        System.out.println(++y1 * 8);
        char ch = 'a';
        System.out.println(++ch);
        
    }
    
}
