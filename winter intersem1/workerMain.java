import java.util.*;

class worker {
    protected int hour;

    public static void takingInput() {
        System.out.println("The no. of hours: ");
    }

    public void takeInput() {
        Scanner scan = new Scanner(System.in);
        int hour = scan.nextInt();
        scan.close();
    }
}

class hourlyWorker extends worker {
    public void hourlywage() {
        if (hour > 40) {
            System.out.println(hour/2);
        }
        else{
            System.out.println(hour);
        }
    }
}
class salaried extends worker{
    public void salaryWage(){
        System.out.println(hour);
    }
}

public class workerMain {
    public static void main(String[] args) {
        worker w=new hourlyWorker();
    }

}
