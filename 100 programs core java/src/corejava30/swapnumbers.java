package corejava30;

import java.util.Scanner;

public class swapnumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x,y,temp;
		System.out.println("Enter x and y");
		Scanner in = new Scanner(System.in);
		x = in.nextInt();
		y = in.nextInt();
		System.out.println("before swapping\nx ="+x+"\ny ="+y);
		temp = x;
		x = y;
		y = temp;
		System.out.println("after swapping\nx ="+x+"\ny="+y);
			
		}
				

	}