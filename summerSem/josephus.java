public class josephus {
    static int solution(int p, int s) {
        if (p == 1)
            return 1;
        return (solution(p - 1, s) + s - 1) % p + 1;
    }

    public static void main(String[] args) {
        int p = 9, s = 5;
        int rel = solution(p, s);
        System.out.println("safe position : " + rel);
    }
}