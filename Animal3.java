
// This is using method


class Animal3
{
    String colour;
    int age;

    public void intObj(String c, int a)
    {
       colour = c;
       age = a;
    }
    public void display()
    {
        System.out.println(colour + " " + age);
    }

    public static void main(String[] args) {
        Animal3 bulldog = new Animal3();
        bulldog.intObj("Black", 10);
        bulldog.display();
    }
}