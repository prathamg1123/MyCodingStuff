class person {
    String name;
    int age;
}

class Student extends person{ //single Inheritance
    String roll;
    String department;
}

class gradStudent extends person { // Multilevel Inheritance
    String researchField; 
}
public class Ex3 {
    public static void main(String[] args) {
        person p1 = new person();
        Student s1 = new Student();
        gradStudent g1 = new gradStudent();

        p1.name = "Pratham";
        p1.age = 19;

        s1.department = "CSE";
        s1.roll = "24100BTCSE17813";

        g1.researchField = "Philosophy";

    }
}
