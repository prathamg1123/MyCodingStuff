// Program to demonstrate Type Casting in Java

public class TypeCastingDemo {

    public static void main(String[] args) {

        // Implicit Type Casting (Widening)
        int a = 10;
        double b = a;   // int → double

        System.out.println("Implicit Type Casting:");
        System.out.println("int value: " + a);
        System.out.println("Converted to double: " + b);

        // Explicit Type Casting (Narrowing)
        double x = 20.78;
        int y = (int) x;   // double → int

        System.out.println("\nExplicit Type Casting:");
        System.out.println("double value: " + x);
        System.out.println("Converted to int: " + y);
    }
}
