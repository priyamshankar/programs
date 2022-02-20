
class color {
    protected int n, i, color;
    protected String red = "redcl";
    protected String blue = "bluecl";
    protected String green = "greencl";

    void colorIt() {
        System.out.println("the color is: ");
        if (n == 2) {
            System.out.println(red);
        } else if (n == 4) {
            System.out.println(blue);
        }
        else {
            System.out.println("no valid color");
        }
    }
    // color(int imput){
    //     this.n=imput;
    // }
}

class pen extends color{
    protected int pencil;
    void pencile(){
        colorIt();
    }
    pen(int input){
        this.n=input;
    }
}

public class classesJava {
    public static void main(String[] args) {
        // color col= new color(2);
        // col.colorIt();
        pen pe=new pen(4);
        pe.pencile();

    }
}
