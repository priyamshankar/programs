public class longesSequen {
    /*
     * the bits in the binary representation of the gie number
     * keep track of the current 1's sequence length and previous 1's sequence
     * length.
     * if 0update the previous length
     * if the next bit is a 1, th previous length should be set to the current
     * length.
     * if the next bit is 0 then can't merge these sequence, set previous length is
     * 0.
     * the current value of max-length.
     * current length + previous length.
     * result =return max-Length + 1;
     */
    // Java program to find maximum consecutive

    static int flipBit(int a) {
        if (~a == 0) {
            return 8 * sizeof();
        }

        int currLen = 0, prevLen = 0, maxLen = 0;
        while (a != 0) {
            if ((a & 1) == 1) {
                currLen++;
            }
            else if ((a & 1) == 0) {
                prevLen = (a & 2) == 0 ? 0 : currLen;
                currLen = 0;
            }
            maxLen = Math.max(prevLen + currLen, maxLen);
            a >>= 1;
        }
        return maxLen + 1;
    }

    static byte sizeof() {
        byte sizeOfInteger = 8;
        return sizeOfInteger;
    }

    public static void main(String[] args) {
        System.out.println(flipBit(13));
    }
}

// This code is contributed by PrinciRaj1992
