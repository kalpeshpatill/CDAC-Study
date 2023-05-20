package eightinth_march;

import java.util.Scanner;

public class REverse_num {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n, reverse = 0;
		System.out.println("enter num");
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		while(n != 0)
		{
			reverse = reverse*10;
			reverse = reverse+n%10;
			n = n/10;
			
		}
		
System.out.println("reverse of entered num=="+reverse);
	}

}
