public class palindrome {
    /*
     * find a number of bits in x using size of operator
     * initialise left and right positions as 1 and n respectively.
     * do following while left 1 is smaller than r
     * if bit at position 1 is not same as bit at position r then return false
     * increment 1 and decrement 1.
     * if each it means didn't find a mismathing bit
     * the expression "x&(1<<(k-1)):".
     */
    public static void main(String[] args) {
        String str="1891";
        int n = str.length();
        // int palindrome;
        // int set = 0;
        // int backSet = n;
        for (int i = 0; i < n/2; i++) {
            if (str.charAt(i) == str.charAt(n-1)) {
                // System.out.println("palindrome");
                n--;
                continue;    
            }
            else{
                System.out.println("Not a palindrome");
                return;
            }
        }
        System.out.println("palindrome");
            
        // long num = 5,n1;
        // long reverse=0;
        // n1=num;

        // while (n1>0){
        //     reverse<<=1;
        //     if ((n1&1)==1)
        //     reverse ^=1;
        //     n1>>=1;
        // }
        // if(num==reverse){
        //     System.out.println("binary representation of "+ num+ "is :");
        // }
        // else{
        //     System.out.println("binary representation of "+ num+ "is :");
        // }
    }
}
