package corejava30;

import java.util.Scanner;

public class Getinputfromuser {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a;
		float b;
		String s;
		
		Scanner in= new Scanner(System.in);
		System.out.println("Enter the string");
		s = in.nextLine();
		System.out.println("You enter string"+s);
		System.out.println("Eter the integer");
		a = in.nextInt();
		System.out.println("you enter int"+a);
		System.out.println("enter the float");
		b= in.nextFloat();
		System.out.println("you enter float"+b);
				

	}

}
