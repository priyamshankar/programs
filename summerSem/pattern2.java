import java.util.Scanner;

public class pattern2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x,y;
        x=6;
        
        int n = scan.nextInt();
        System.out.println(6);
        for (int i = 5; i <= n; i=i+5) {
            x=x+i;
            System.out.println(x);
        }
        System.out.print(1.645);
    }

}
