
import java.util.Scanner;

public class primeNO {

    public static void main(String[] args) {
        Boolean[] x=new Boolean[100];
        System.out.println(x[1]);
        Scanner s = new Scanner(System.in);
        // System.out.print("Enter the first number : ");
        // int start = s.nextInt();
        int start = 1;
        System.out.print("Enter the number to which we have to find the prime: ");
        int end = s.nextInt();
        System.out.println("List of prime numbers between " + start + " and " + end);
        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                System.out.println(i);
            }
        }
    }

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;

    }


}


// compare all primes smaller or equal to square root of high using simple sieve .
// count of element in given range 
// delaring boolean only for (low to high)
// find the maxm number in low to high that is a multiple of prime[i] sieve (divisible by prime [i])
// mark multiples of prime[i ] is low to high
// numbers which are not marked  in range are prime.