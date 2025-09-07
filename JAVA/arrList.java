import java.util.*;
public class arrList {
    public static void main(String[] args) {
        // String str = "Hello";
        // System.out.println(str);
        // for(int i=0; i<str.length(); i++){
        //     System.out.println(str.charAt(i));
        // }

        // String ss = str.substring(2,5);
        // System.out.println(ss);

        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);

        System.out.println(list + " " + list.size());
        // for(int val: list){
        //     System.out.println(val);
        // }

        for(int i=0; i<list.size(); i++){
            System.out.println(list.get(i));
        }
    }
}
