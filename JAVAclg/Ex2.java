public class Ex2 {
    public static void main(String[] args) {
        double x = 55.66;
        int y = 22;

        // int a = x;// give error 
        int a = (int)x ; //explecit ty      pe casting
        double b = y; // implecit type casting

        System.out.println(a + " " + b);
    }
}
