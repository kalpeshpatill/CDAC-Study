package ninethinth_Apr;

import java.util.Scanner;

public class palindrome_or_not {

	public static class String_endwith {

		public static void main(String[] args) {
			// TODO Auto-generated method stub

		}

	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String original, reverse = "";
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a string to check if it is a palindrome");
		original = in.nextLine();
		int length = original.length();
		for ( int i = length - 1; i >= 0; i-- )
		reverse = reverse + original.charAt(i);
		if (original.equals(reverse))
		System.out.println("Entered string is a palindrome.");
		else
		System.out.println("Entered string is not a palindrome.");
	

	}

}
