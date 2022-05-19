import java.util.Scanner;

public class swapTwoNibbles {

    static int swapNibbles(int x) {
        return ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
    }

    public static void main(String[] args) {
        /*
         * x have in binary. the operation can split in mainly two parts.
         * the esxpression "x&0xF" gices last 4 digit bits of x.
         * using bitwise operator "<<" shift last 4 bits to the left 4 times.
         * the expression "x&0xF0" fist 4 digits of x.
         * using vitwise operator >> shift the 4 bits to the right 3 times.
         * use bitwitse or | operation of two expressions.
         */
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = swapNibbles(x);
        System.out.println("the solution is : " + y);
        System.out.println("the binary value is: " + Integer.toBinaryString(x));
    }
}
