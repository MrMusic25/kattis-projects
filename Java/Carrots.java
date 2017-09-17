import java.util.Scanner;

public class Carrots {
	public static void main(String args[]) throws Exception {
		int numContestants = 0, numProblems = 0;
		Scanner input = new Scanner(System.in);
		numContestants = input.nextInt();
		numProblems = input.nextInt();
		
		String contestantDescriptions[] = new String[numContestants];
		for (int i = 0; i < numContestants; i++) {
			Scanner desc = new Scanner(System.in);
			contestantDescriptions[i] = desc.next();
		}
		
		System.out.printf(numProblems + "\n");
	}
}