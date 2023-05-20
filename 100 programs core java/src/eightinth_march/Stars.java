package eightinth_march;

public class Stars {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int row = 0,numberofStars;
		for(row=1; row<=10;row++)
		{
		for(numberofStars=1; numberofStars<=row;numberofStars++);
		{
			System.out.print("*");
		}
		System.out.println();//GO to NEXT LIne
	}

}
}