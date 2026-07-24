class animal{
    // public
        // String name;
        void eat(){
            System.out.println("Eat from ANIMAL");
        }
    }

    class cat extends animal{
    // public
        void eat(){
            System.out.println("Eat from CAT");
        }
    }

    class dog extends animal{
        void bark(){
            System.out.println("Dog is Barking - BHHAAUUUUUUU");
        }
    }

public class inheritance {
    public static void main(String[] args) {
        animal a =  new animal();
        a.eat();

        cat c = new cat();
        c.eat();

        dog d = new dog();
        d.bark();
    }
}

