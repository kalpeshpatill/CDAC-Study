package eightinth_march;

import java.util.Scanner;

public class Find_largest_no {

	public static void main(String[] args) {
		// TODO Auto-generated method stub/
		int x,y,z;
		System.out.println("enter the 3 int");
		Scanner in = new Scanner(System.in);
		x = in.nextInt();
		y = in.nextInt();
		z = in .nextInt();
		if(x>y&&y>z)
			System.out.println("first number is largest");
		else if(y>x&&y>z)
			System.out.println("second num is largest");
		else if(z>x&&z>y)
			System.out.println("third num is largest"); 
		else
			System.out.println("Enter number are not distinct");
		

	}

}
