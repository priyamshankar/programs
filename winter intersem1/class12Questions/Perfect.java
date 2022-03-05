import java.io.*;
import java.util.Scanner;

class Perfect {
    private int num;
    private int f;

    public Perfect(int num) {
        this.num = num;
        f = 1;
    }

    public int sumOfFactors(int i) {
        if (i == f) {
            return 0;
        } else if (i % f == 0)
            return f++ + sumOfFactors(i);
        else {
            f++;
            return sumOfFactors(i);
        }
    }

    public void check() {
        if (num == sumOfFactors(num))
            System.out.println(num + " is a Perfect Number");
        else
            System.out.println(num + " is not a Perfect Number");
    }

    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number:");
        int n = sc.nextInt();
        Perfect obj = new Perfect(n);
        obj.check();
        sc.close();
    }
}
