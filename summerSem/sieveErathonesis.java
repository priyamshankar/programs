public class sieveErathonesis {
    public static void main(String[] args) {
        Boolean[] boolArray = new Boolean[101];

        for (int i = 2; i <= 100; i++) {
            boolArray[i] = true;
        }
        int n=100;

        for (int p = 2; p * p <= n; p++) {

            if (boolArray[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    boolArray[i] = false;
            }
        }

        for (int i = 2; i <= 100; i++) {
            if (boolArray[i] == true) {
                System.out.println(i + " is boolArray");
            }
        }

    }
}
