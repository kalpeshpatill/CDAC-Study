package eightinth_march;

import java.util.Scanner;

public class Breackwhileloop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			int n;
			Scanner input = new Scanner(System.in);
			while (true) {
			System.out.println("Input an integer");
			n = input.nextInt();
			if (n == 0) {
				break;
			
			}
			System.out.println("You entered " + n);
			}
	}
	}
