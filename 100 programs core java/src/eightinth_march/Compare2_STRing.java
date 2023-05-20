package eightinth_march;

import java.util.Scanner;

public class Compare2_STRing {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s1,s2;
		Scanner in = new Scanner(System.in);
		System.out.println("enter FIRSt stringggggggggg");
		s1 = in.nextLine();
		System.out.println("Enter SEcond Stringgggggggggggggg");
		s2 = in.nextLine();
		if(s1.compareTo(s2)<0)
		System.out.println("First is GRETHERRRRRRRRRRRRRR");
		else if(s1.compareTo(s2)>0)
				System.out.println("2nd is GRETHERRRRRRRRRRRRRRRRRR");
		else System.out.println("both are EQUal.");

	}

}
