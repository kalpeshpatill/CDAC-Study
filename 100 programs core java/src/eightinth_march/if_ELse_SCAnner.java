package eightinth_march;

import java.util.Scanner;

public class if_ELse_SCAnner {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int marksObtained,passingMarks;
     passingMarks = 35;
     Scanner input = new Scanner(System.in);
     System.out.println("enter your layki");
     marksObtained = input.nextInt();
     if (marksObtained>= passingMarks)
     {
    	 System.out.println("bete MOUJ Kardi");
     }
      else {System.out.println("you will be next PM.");
     
     }
	}
}
