import java.util.ArrayList;

class Main {

    public static void main(String[] args) {
        System.out.println(enumerate_primes(25));
        System.out.println(enumerate_primes_brute_force(25));
    }

    public static ArrayList<Integer> enumerate_primes(int n) {
        ArrayList<Integer> primes = new ArrayList<Integer>();
        ArrayList<Boolean> is_prime = new ArrayList<Boolean>();
        is_prime.add(false);
        is_prime.add(false);

        for (int i = 2; i <= n; i++) {
            is_prime.add(true);
        }

        for (int p = 2; p <= n; p++) {
            if (is_prime.get(p)) {
                primes.add(p);
                for (int i = p * 2; i <= n; i += p) {
                    is_prime.set(i, false);
                }
            }
        }
        
        return primes;
    } 

    public static ArrayList<Integer> enumerate_primes_brute_force(int n) {
        ArrayList<Integer> primes = new ArrayList<Integer>();
        boolean prime;
        for (int i = 2; i < n; i++) {
            prime = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                primes.add(i);
            }
        }

        return primes;
    }

}
