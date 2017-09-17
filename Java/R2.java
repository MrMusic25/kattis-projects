import java.util.Scanner;

public class R2 {
  public static void main(String args[]) {
    int r1, s;
    Scanner input = new Scanner(System.in);
    r1 = input.nextInt();
    s = input.nextInt();

    if (r1 < -1000 || r1 > 1000) System.exit(1);
    if (s < -1000 || s > 1000) System.exit(1);

    System.out.printf(((2*s)-r1) + "\n");
  }
}
