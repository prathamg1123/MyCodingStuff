class mathOpretion{
    //Compile time Polymorphism
    int add(int a , int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
}

class runTime1 {
    void print(){
        System.out.println("Hello from 1st Class");
    }
}
class runTime2 {
    void print(){
        System.out.println("Hello from 2nd Class");
    }
}

class polymorphism{
    public static void main(String[] args) {
        mathOpretion obj = new mathOpretion();
        System.out.println(obj.add(2,3));
        System.out.println(obj.add(2,3,5));    
    

    runTime1 r1 = new runTime1();
    runTime2 r2 = new runTime2();

    r1.print();
    r2.print();


    }
}
    