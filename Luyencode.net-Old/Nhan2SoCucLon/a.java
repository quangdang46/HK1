import java.util.Scanner;
import java.math.BigInteger;
public class a{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();
        BigInteger mul = a.multiply(b);
        System.out.print(mul);
        sc.close();
    }
}