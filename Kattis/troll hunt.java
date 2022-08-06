import java.util.Scanner;

class Jog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x = sc.nextInt();
        double y = sc.nextInt();
        double z = sc.nextInt();
        x = x - 1;
        int m = (int) (y / z);
        System.out.println((int) Math.ceil(x / m));

    }
}