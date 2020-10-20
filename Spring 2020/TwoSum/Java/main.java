import java.util.Hashtable;

public class main {
    public static void main(String []args) {
        int[] x = {-2, 1, 2, 3, 7, 11};
        int y = 6;
        System.out.println(two_sum(x, y));
        System.out.println(two_sum_brute_force(x, y));
    }
    
   public static boolean two_sum(int []input, int target){
      Hashtable<Integer, Integer> lookUpTable = new Hashtable<Integer, Integer>(); 
      for (Integer i : input) {
          lookUpTable.put(target - i, i);
      }
      
      for (Integer i : input) {
          if (lookUpTable.containsKey(i)) {
              return true;
          }
      }

      return false;
   }

   public static boolean two_sum_brute_force(int []input, int target) {
       for (int i = 0; i < input.length; i++) {
           for (int j = 0; j < input.length; j++) {
               if (input[i] + input[j] == b) {
                   return true;
               }
           }
       }

       return false;
   }
 }
