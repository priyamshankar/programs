import java.util.Scanner;

public class pattern3 {
    public static void main(String[] args) {
        double no=0.5;
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        // System.out.print(0.5+",");
        for (int i = 1; i < n; i++) {
            System.out.print(no+",");
            no=no*3;https://drive.google.com/file/d/1Dd1gicQeZpOethxsjM_v-n-wzt9MVAcj/view
        }
    }
}
