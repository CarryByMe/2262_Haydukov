import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int[][] a = new int[10][10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                a[i][j] = r.nextInt(9);
            }
        }


        f:
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.println(a[i][j]);
                if (a[i][j] == 0) {
                    break f;
                }
            }
        }
    }
}