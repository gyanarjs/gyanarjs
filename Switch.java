
public class Switch {
    public static void main(String[] args) {
        String var = "Brother";

        // switch (var) {
        //     case "Harry":
        //     System.out.println("You are going to become an Adult");
                
        //         break;
        //     case "Klaus":
        //     System.out.println("You are going to join a job");
        //         break;
        //     case "Elijah":
        //     System.out.println("you are going to get retired");
        //         break;    

        //     default:
        //     System.out.println("Enjoy your life");
            
        // }
        // System.out.println("Thanks for using my Java Code");



        switch(var)
        {
            case "Klaus" -> 
            {
                System.out.println("You are the Original Hybrid !!");
                System.out.println("Ypu have heard of me ");
                System.out.println("Fantastic !!");

            }
            case "Elijah" -> 
            {
                System.out.println("You are the one they call honorable");
                System.out.println("This is us The Original Family");
                System.out.println("We remain together");
                System.out.println("Always and Forever");
               
            }
            case "Brother" ->
            {
                System.out.println("Whatever he has to do for Klaus");
                System.out.println("They say Elijah Mikaelson was his Northstar");
                System.out.println("I intend to die by your side");
                System.out.println("I don't desreve the love you have given me brother. But I am so grateful");
            }
            default  -> System.out.println("We stick together as one Always and Forever");
            
        }



    }
    
}
