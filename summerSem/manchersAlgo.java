public class manchersAlgo {
    static void printSubString(String str, int left, int right) {
        for (int i = left; i < right; i++)
            System.out.println(str.charAt(i));
    }

    static void longpalSS(String str) {

        int n = str.length();
        int maxLength = 1, start = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int flag = 1;

                for (int k = 0; k < (j - i + 1) / 2; k++) {
                    if (str.charAt(i + k) != str.charAt(j - k))
                        flag = 0;
                    if (flag != 0 && (j - i + 1) > maxLength) {

                        start = i;
                        maxLength = j - i + 1;
                    }
                }
            }

        }

        System.out.println("The longest Palindrome Substring is : ");
        printSubString(str, start, start + maxLength - 1);

    }

    public static void main(String[] args) {

        String str = "aabacababa";
        longpalSS(str);
    }

}