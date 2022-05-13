import java.util.Scanner;

public class conditionalSt {
    public static void main(String args[]) {
        System.out.println("Enter the marks: ");
        Scanner scan = new Scanner(System.in);
        int marks = scan.nextInt();

        if (marks >= 91 && marks <= 100) {
            System.out.println("S");
        } else if (marks >= 81 && marks <= 90) {
            System.out.println("A");
        } else if (marks >= 71 && marks <= 80) {
            System.out.println("B");
        } else if (marks >= 61 && marks <= 70) {
            System.out.println("C");
        } else if (marks >= 51 && marks <= 60) {
            System.out.println("D");
        } else if (marks >= 41 && marks <= 50) {
            System.out.println("E");
        } else if (marks <= 40 && marks >= 0) {
            System.out.println("F");
        } else {
            System.out.println("Marks not valid");
        }
    }
}
