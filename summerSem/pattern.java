import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        // 1,4,9,16,25
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.print(i * i+",");
        }
        System.out.print(1.645);
    }
}
