package eightinth_march;

import java.util.Scanner;

public class find_FACTORIAL {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         int n,c,fact=1;
         System.out.println("enter no.to cal factoriAL");
         Scanner in = new Scanner (System.in);
         n = in.nextInt();
         if(n<0)
        	 System.out.println("num should be non negative");
         else 
         {
        for( c=1; c<=n; c++);
               fact = fact*c;
               System.out.println("factorial of"+n+"is="+fact);
         }

	}
	}
