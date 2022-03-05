import java.io.*;
import java.util.Scanner;

class Number {
    int n;

    public Number(int nn) {
        n = nn;
    }

    public int factorial(int a) {
        if (a <= 1)
            return 1;
        return a * factorial(--a);
    }

    public void display() {
        System.out.println("Number: " + n);
    }
}

class Series extends Number {
    int sum;

    public Series(int n) {
        super(n);
        sum = 0;
    }

    public void calcSum() {
        for (int i = 1; i <= n; i++) {
            sum += super.factorial(i);
        }
    }

    public void display() {
        super.display();
        System.out.println("Series sum: " + sum);
    }
}

class Factorial {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        Series obj = new Series(num);
        obj.calcSum();
        obj.display();
    }
}