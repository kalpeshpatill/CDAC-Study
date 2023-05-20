package eightinth_march;

import java.util.Scanner;

public class Swap2nowithout3rdvariable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x, y;
		System.out.println("Enter x and y");
		Scanner in = new Scanner(System.in);
		x=in.nextInt();
		y=in.nextInt();
		x = x+y;
		y = x-y;
		x = x-y;
		System.out.println("afte swappping\nx = "+x+"\ny = "+y);

		
		
		
		

	}

}
