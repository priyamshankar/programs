import java.util.Scanner;

public class stringOutbound {
    public static void main(String args[]) {
        System.out.println("Enter the grade: ");
        Scanner scan = new Scanner(System.in);
        char grade = scan.next().charAt(2);  // intentional erro for out bound
    }
}