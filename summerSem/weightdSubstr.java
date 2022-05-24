import java.util.*;

class wightedSubstr {
    static int subString(String P, String Q, int k, int N) {
        HashSet<String> S = new HashSet<String>();
        for (int i = 0; i < N; ++i) {
            int sum = 0;
            String s = " ";
            for (int j = i; j < N; ++j) {
                int pos = P.charAt(j) - 'a';

                sum += Q.charAt(pos) - '0';
                s += P.charAt(j);
                if (sum <= k) {
                    S.add(s);
                } else {
                    break;
                }
            }
        }
        return S.size();
    }

    public static void main(String[] args) {
        String P = "priyam";
        String Q = "12300045600078900012345000";
        int k = 6;
        int N = P.length();
        System.out.println(subString(P, Q, k, N));
    }
};