package stringcorejava;

public class Staticblockworking {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Main method is executed.");
	}
	static {
	System.out.println("Static block is executed before main method.");
	}
	}
	//Static Block Application �. We need to open Program in speciif window
	class StaticBlock {
	public static void main(String[] args) {
	System.out.println("You are using Windows_NT operating system.");
	}
	static {
	String os = System.getenv("OS");
	if (os.equals("Windows_NT") != true) {
	System.exit(1);

	}
	}
	}
