import java.util.Scanner;

public class printNTimes {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("enter the size of array: ");

        int x;
        x = scan.nextInt();
        int n[] = new int[x];
        System.out.println("Enter the content of the arrays: ");
        for (int i = 0; i < x; i++) {

            n[i] = scan.nextInt();
        }
        int sum = 0;
        for (int i = 0; i < x; i++) {
            // System.out.println(n[i]);
            sum = sum + n[i];
        }
        System.out.println("array's sum is: " + sum);

    }
}
