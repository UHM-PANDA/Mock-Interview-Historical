import java.util.Hashtable;
import java.util.Arrays;

public class TripleSum_Program {
    public static void main(String []args) {
       System.out.println("Hello World");
    }

   public static boolean two_sum(int []input, int target){
      Hashtable<Integer, Integer> lookUpTable = new Hashtable<Integer, Integer>(); 
      for (Integer i : input) {
          if (lookUpTable.containsKey(i)) {
              return true;
          }
      }

      return false;
   }

   public static boolean triple_sum(int []input, int target) {
       for (int i = 0; i < input.length; i++) {
           if (two_sum(Arrays.copyOfRange(input, 0, i) + Arrays.copyOfRange(input, i + 1, input.length)), target - input[i]) {
               return true;
           }
       }
   }

   public static boolean triple_sum_brute_force(int []input, int target) {
       for (int i = 0; i < input.length; i++) {
           for (int j = i + 1; j < input.length; j++) {
               for (int k = j + 1; k < input.length; k++) {
                   if (target == input[i] + input[j] + input[k]) {
                       return true;
                   }
               }
           }
       }
       return false;
   }
 }
