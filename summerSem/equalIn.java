import java.util.Scanner;

public class equalIn {
    public static void main(String args[]) {
        System.out.println("Enter the grade: ");
        Scanner scan = new Scanner(System.in);
        char grade = scan.next();


        if (scan.equals('s')) {
            System.out.println("S");
        } else if (grade >= 81 && grade <= 90) {
            System.out.println("A");
        } else if (grade >= 71 && grade <= 80) {
            System.out.println("B");
        } else if (grade >= 61 && grade <= 70) {
            System.out.println("C");
        } else if (grade >= 51 && grade <= 60) {
            System.out.println("D");
        } else if (grade >= 41 && grade <= 50) {
            System.out.println("E");
        } else if (grade <= 40 && grade >= 0) {
            System.out.println("F");
        } else {
            System.out.println("Marks not valid");
        }
    }
}
