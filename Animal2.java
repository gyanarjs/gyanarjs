class Animal2
{
    String colour;
    int age;
    public static void main(String[] args) {

        // This is using reference variable
        Animal2 pug = new Animal2();
        pug.colour = "Black";
        pug.age = 10;
        System.out.println(pug.colour + " " + pug.age);

    }
}
