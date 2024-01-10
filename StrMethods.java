public class StrMethods {
    public static void main(String[] args) {
        String name = "Elijah";
        //System.out.println(name);
        //int value = name.length();
        // System.out.println(value);

        // String lstring = name.toLowerCase();
        // System.out.println(lstring);


        // String ustring = name.toUpperCase();
        // System.out.println(ustring);


        // String nonTrimmedString = "    Harry      ";
        // System.out.println(nonTrimmedString);
        // System.out.println(nonTrimmedString.trim());
        // String trimmedString = nonTrimmedString.trim();
        // System.out.println(trimmedString);


        System.out.println(name.substring(1));
        System.out.println(name.substring(1, 6));

        System.out.println(name.replace('i', 'j'));
        System.out.println(name.replace("i", "k"));

        System.out.println(name.startsWith("Eli"));
        System.out.println(name.endsWith("jah"));

        System.out.println(name.charAt(3));

        System.out.println(name.indexOf("i"));

        String modifiedName = "Elijahjah";
        System.out.println(modifiedName.indexOf("jah"));
        System.out.println(modifiedName.indexOf("jah", 4));
        System.out.println(modifiedName.lastIndexOf("ah", 5));

        System.out.println(name.equals("Elijah"));
        System.out.println(name.equalsIgnoreCase("elijah"));

        System.out.println("\"I am Elijah Mikaelson \"" );
        System.out.println("\"I am Kalus Mikaelson\"");





    }
    
}
