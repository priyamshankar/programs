import java.util.Scanner;

public class characterSwitch {
        public static void main(String args[]) {
            System.out.println("Enter the grade: ");
            Scanner scan = new Scanner(System.in);
            char grade = scan.next().charAt(0);

        switch (grade) {
            case 's':
                System.out.println("90 to 100");

                break;

            case 'a':
                System.out.println("80 to 89");

                break;

            case 'b':
                System.out.println("70 to 79");

                break;
            case 'c':
                System.out.println("60 to 69");

                break;
            case 'd':
                System.out.println("50 to 59");

                break;
            case 'e':
                System.out.println("40 to 49");

                break;
            case 'f':
                System.out.println("Below 40");
                break;

                case 'S':
                System.out.println("90 to 100");

                break;

            case 'A':
                System.out.println("80 to 89");

                break;

            case 'B':
                System.out.println("70 to 79");

                break;
            case 'C':
                System.out.println("60 to 69");

                break;
            case 'D':
                System.out.println("50 to 59");

                break;
            case 'E':
                System.out.println("40 to 49");

                break;
            case 'F':
                System.out.println("Below 40");
                break;

                case 'n':
                System.out.println("Malpractice");
                break;

            default:
                System.out.println("invalid Grades");

                break;
        }
    }
}
