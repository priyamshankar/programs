import java.util.*;

public class manuevering_algo{
   
   static int path(int m,int n){ 
    if(m==1||n==1)
    return 1;

    return path(m-1,n)+path(m,n-1);
}

public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int a,b;
    
    System.out.println("Enter no. of columns and rows:");
    a=sc.nextInt();
    b=sc.nextInt();
    System.out.println(path(a, b));

}
}