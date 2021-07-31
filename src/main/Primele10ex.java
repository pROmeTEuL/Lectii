package main;
import java.util.Scanner;
import java.math.*;

public class Primele10ex {
	static Scanner  sc = new Scanner(System.in);
	public static void ex1() {
		int a;
		a = sc.nextInt();
		System.out.println(a);
	}
	public static void ex2() {
		int a, b;
		System.out.print("a=");
		a = sc.nextInt();
		System.out.print("b=");
		b = sc.nextInt();
		System.out.println("a+b=" + (a + b));
		System.out.println("a-b=" + (a - b));
	}
	public static void ex3() {
		System.out.print("  *   \n");
		System.out.print(" * *  \n");
		System.out.print("*   * \n");
		System.out.print("***** \n");
		System.out.print("*   * \n");
		System.out.print("*   * \n");
		System.out.print("*   * \n");
		System.out.print("***** \n");
	}
	public static void ex4() {
		int c1, c2;
		System.out.print("C1=");
		c1 = sc.nextInt();
		System.out.print("C2=");
		c2 = sc.nextInt();
		System.out.println("I=" + (Math.sqrt(c1 * c1 + c2 * c2)));
	}
}
