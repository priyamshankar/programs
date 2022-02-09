// import java.util.*;
import java.lang.Math;

class ArmNum {
    protected int n;
    protected int i;
    protected int sum;
    int temp;
    public void armstrong() {
        if (sum_pow() == n) {
            System.out.println("It is an armstrong no.");
        } else {
            System.out.println("Not an armstrong");
        }
        System.out.println(sum);
    }

    int sum_pow() {
        sum = 0;
        temp = n;
        for (int j = 0; j < i; j++) {
            int last;
            last = temp % 10;
            sum += (Math.pow(last, i));
            temp = temp / 10;
        }
        return sum;
    }

    ArmNum(int no, int dig) {
        this.n = no;
        this.i = dig;
    }
}

public class armstrong {
    public static void main(String[] args) {
        ArmNum initial = new ArmNum(371, 3);
        initial.armstrong();
    }
}