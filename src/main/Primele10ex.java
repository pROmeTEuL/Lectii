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
	public static void ex5() {
//		nu mai stiu ce am vrut sa fac aici :)
	}
	public static void ex6() {
		int os, ms, op, mp;
		op = sc.nextInt();
		mp = sc.nextInt();
		os = sc.nextInt();
		ms = sc.nextInt();
		if(ms < mp) {
			System.out.println((os - 1 - op) + ":" + (ms + 60 - mp));
		}else {
			System.out.println((os - op) + ":" + (ms - mp));
		}
	}
	public static void ex7() {
		int suma, b100, b10, b1;
		System.out.print("Suma totala de bani=");
		suma = sc.nextInt();
		b100 = suma / 100;
		suma = suma - b100 * 100;
		b10 = suma / 10;
		b1 = suma - b10 * 10;
		System.out.println("bancnote de 100 = " + b100 + " de 10 = " + b10 + " iar de 1 = " + b1);
	}
}
