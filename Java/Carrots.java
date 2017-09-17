import java.util.Scanner;

public class Carrots {
	public static void main(String args[]) {
		int numContestants = 0, numProblems = 0;
		Scanner input = new Scanner(System.in);
		numContestants = input.nextInt();
		numProblems = input.nextInt();
		if (numContestants < 1 || numProblems > 1000) System.exit(1);
		
		String contestantDescriptions[] = new String[numContestants];
		for (int i = 0; i < numContestants; i++) {
			Scanner desc = new Scanner(System.in);
			contestantDescriptions[i] = desc.next();
		}
		
		System.out.printf(numProblems + "\n");
	}
}