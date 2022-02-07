// import java.io.*;
import java.util.*;

class vehicle {
    String vehicle;
    public int cost;

    public void asset() {
        System.out.println("The name of the vehicle is: " + vehicle);
        System.out.println("The cost of the vehicle is: " + cost);
    }

    vehicle(String name, int cost) {
        this.vehicle = name;
        this.cost = cost;
    }
}


public class classqn {
    public static void main(String[] args) {
        System.out.println("program running be prepared");
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the name of the vehicle");
        String naem = scan.nextLine();
        System.out.println("Enter the cost of the vehicle");
        int cos = scan.nextInt();
        vehicle v1 = new vehicle(naem, cos);
        v1.asset();
        scan.close();

    }
}