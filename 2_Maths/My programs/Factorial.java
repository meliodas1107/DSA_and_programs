import java.util.Scanner;
public class Factorial{

    static Scanner scanner= new Scanner(System.in);
    public static void main(String args[]) {
        System.out.println("Hello world");
        int n=scanner.nextInt();
        System.out.println(n);
        factorial_1(n);
    }
    void factorial_1(int n){
        int fac=1;
        while(n>0){
            fac=fac*n--;
        }
        System.out.println(fac);
    }
}