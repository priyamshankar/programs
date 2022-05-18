import java.util.Scanner;

public class gcd {
    public static void main(String[] args) {
        int gcd = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first value:");
        int x = sc.nextInt();
        System.out.print("Enter second value:");
        int y = sc.nextInt();

        for (int i = 1; i <= x && i <= y; i++) {
            if (x % i == 0 && y % i == 0) {
                gcd = i;
                System.out.println(i);
            }
        }
        System.out.print(" GCD of " + x + " and " + y + " is " + gcd);
    }

}