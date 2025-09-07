// import java.io.*;
import java.util.*;
public class Test{
    
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        // System.out.print("Enter X: ");
        // int x = scn.nextInt();
        // System.out.print("Enter n: ");
        // int n = scn.nextInt();
        // int ans = power(x, n);
        // System.out.println(ans);
        
      
        // displayArr(arr,0);
        int n;
        
        // int max = maxOfArr(arr,0);
        // System.out.println(max);
        int[] arr = {1, 3, 5, 63, 7, 8};
    }

    public static int maxOfArr(int[] arr, int idx){
       if(idx == arr.length-1){
        return arr[idx];
       }
       int misa = maxOfArr(arr, idx+1);
        if(misa > arr[idx]){
            return misa;
        } else{
            return arr[idx];
        }
    }


    public static void displayArr(int[] arr, int idx){
        if(idx == arr.length){
            return;
        }
       
        displayArr(arr, idx+1);
        System.out.println(arr[idx]);
    }
    public static int factorial(int n){
        if(n==1 || n==0){
            return 1;
        }
        // int t = 5 *( factorial((n-1)));
        return (n*factorial(n-1));
    }

    public static int power(int x, int n){
        if(n == 0){
            return 1;
        }  
        int ans = power(x, n/2) * power(x, n/2);
        if(n%2==1){
            ans = ans*x;
        }
        return ans;
    }
}