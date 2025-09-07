import java.util.Scanner;

public class recursion {
    public static void main(String[] args){
        // Scanner scn = new Scanner(System.in);
        // int n = scn.nextInt();
       
       
        // for(int i=0; i<arr.length; i++){
        //     arr[i] = scn.nextInt();
        // }
        // scn.close();

        // int[] arr = { 2, 4, 5, 3, 2};
        // int x = 2;
        // int ans = FO(arr, 0 , x);
        // System.out.println(ans);

        // int[] arr = { 2, 4, 5, 3, 2};
        // int x = 2;
        // System.out.println(LO(arr, arr.length-1, x));

        int arr[] = {2, 3, 6, 2, 8, 2, 7};
      
        // fsf = found so far

        int[] iarr = allIndices(arr, 0, 2, 0);

        for(int i=0; i<iarr.length; i++){
            System.out.print(iarr[i]+" ");
        }

      
    }


    public static int[] allIndices(int[] arr, int idx, int x, int fsf){
        if(idx == arr.length){
            return new int[fsf];
        }
        if(arr[idx] == x){
            int[] iarr = allIndices(arr, idx+1, x, fsf+1);
            iarr[fsf] = idx;
            return iarr;
        } else{
            int[] iarr = allIndices(arr, idx+1, x, fsf);
            return iarr;
        }

    }



    public static int FO(int[] arr , int idx, int x){ // first occurence
        if(idx == arr.length){
            return -1;
        }
        if(arr[idx] == x){
            return idx;
        } else{
           int t = FO(arr, idx+1, x);
           return t;
        }
        
    }



    public static int LO(int[] arr, int idx, int x){
        if(idx == -1){
            return -1;
        }
        if(arr[idx] == x){
            return idx;
        } else{
            return LO(arr, idx-1, x);
        }

    }

    public static int arrf(int n) throws Exception{
        return null;
    }
}
