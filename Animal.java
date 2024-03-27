class Animal {
    public void run() {
        System.out.println("...Run ");
    }

    public void eat() {
        System.out.println("Fed my way trough thousand's of innocents ");
    }


    public static void main(String[] args) {
        Animal Klaus = new Animal();
        Klaus.run();
        Klaus.eat();

        // We can create new objects and call the same function but it will create extra
        // memory
        // and runtime will be slow

        // Animal Elijah = new Animal();
        // Elijah.run();
        // Elijah.eat();

        Birds crow = new Birds();
        crow.fly();

    }
}

class Birds
{
    public void fly()
    {
        System.out.println("Yes I am flying ");
    }
}

