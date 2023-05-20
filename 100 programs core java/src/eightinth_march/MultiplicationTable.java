package eightinth_march;

import java.util.Scanner;

public class MultiplicationTable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
int n,c;
System.out.println("enter num");
Scanner in = new Scanner(System.in);
n = in.nextInt();
for( c = 1; c <=10; c++)
	System.out.println((n*c));
	}

}
