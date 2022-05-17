import java.util.*;

public class strabogrammaticNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the no. to check: ");

        String N = scan.nextLine();
        if (checkStrobgrammatic(N)) {
            System.out.println("yes " + N + " is strobgrammatic no.");
        } else {
            System.out.println(N + " is not a strobgrammatic.");
        }
    }

    public static boolean checkStrobgrammatic(String N) {
        if (N == null || N.length() == 0) {
            return true;
        }
        HashMap<Character, Character> hasMap = new HashMap<Character, Character>();
        hasMap.put('0', '0');
        hasMap.put('1', '1');
        hasMap.put('8', '8');
        hasMap.put('6', '9');
        hasMap.put('9', '6');
        int L = 0;
        int R = N.length() - 1;
        while (L <= R) {
            if (!hasMap.containsKey(N.charAt(R)) || N.charAt(L) != hasMap.get(N.charAt(R))) {
                return false;
            }
            R--;
            L++;
        }
        return true;
    }
}
