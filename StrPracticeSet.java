public class StrPracticeSet {
    public static void main(String[] args) {
        // Question 1

        String name = "Jack Parker";
        name = name.toLowerCase();
        System.out.println(name);


        // Ousetion 2

        String text = "Thank you my friend";
        text = text.replace(" ", "_");
        System.out.println(text);
        

        //Question 3

        String letter = "Dear <|name|>, Thanks a lot!";
        letter = letter.replace("<|name|>", "Harry");
        System.out.println(letter);

        // Question 4

        String myString = "This String contains    double and triple  spaces";
        System.out.println(myString.indexOf("   "));
        System.out.println(myString.indexOf("  "));


        // Question 5
        String myLetter = "Dear Elijah,\n\tI don't deserve the love you have given me brother.\nBut I am so grateful";
        System.out.println(myLetter);





    }
    
}
