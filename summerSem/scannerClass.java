import java.util.Scanner;

public class scannerClass {
    public static void main(String args[]) {
        System.out.println("enter the no,: ");
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        System.out.println(x);


        if (x equalIn x[0]) {
            System.out.println("S");
        } else if (x >= 81 && x <= 90) {
            System.out.println("A");
        } else if (x >= 71 && x <= 80) {
            System.out.println("B");
        } else if (x >= 61 && x <= 70) {
            System.out.println("C");
        } else if (x >= 51 && x <= 60) {
            System.out.println("D");
        } else if (x >= 41 && x <= 50) {
            System.out.println("E");
        } else if (x <= 40 && x >= 0) {
            System.out.println("F");
        } else {
            System.out.println("Marks not valid");
        }
    }
}
