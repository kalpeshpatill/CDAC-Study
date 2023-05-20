package stringcorejava;

import java.util.Scanner;

public class ExceptionHandling {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a, b,D;
		Scanner input = new Scanner(System.in);
		System.out.println("Input two integers");
		a = input.nextInt();
		b = input.nextInt();
		// try block
		try {
	     D = a / b;
		System.out.println("Result = " + D);
		}
		catch (ArithmeticException e) {
			System.out.println("Exception caught: Division by zero.");
				}
}
}

		
