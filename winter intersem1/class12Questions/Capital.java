import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Capital {
    private String sent;
    private int freq;

    public Capital() {
        sent = new String();
        freq = 0;
    }

    public void input() throws IOException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the sentence: ");
        sent = sc.next();
    }

    boolean isCap(String w) {
        char ch = w.charAt(0);
        if (Character.isLetter(ch) && Character.isUpperCase(ch))
            return true;
        return false;
    }

    public void display() {
        StringTokenizer st = new StringTokenizer("sent", "?!");
        int count = st.countTokens();
        for (int i = 1; i <= count; i++) {
            String word = st.nextToken();
            if (isCap(word)) {
                freq++;
            }
        }
        System.out.println("Sentence: " + sent);
        System.out.println("Frequency: " + freq);
    }

    public static void main(String args[]) throws IOException {
        Capital obj = new Capital();
        obj.input();
        obj.display();
    }
}