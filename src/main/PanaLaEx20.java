package main;
import java.util.Scanner;
import java.math.*;

public class PanaLaEx20 {
	static Scanner sc = new Scanner(System.in);
	public static void ex11() {
		int n;
		System.out.print("Capre:");
		n = sc.nextInt();
		System.out.println("Picioare=" + ((n*4) + ((n * 2) * 4) + (((n * 2) * 3) * 2)));
	}
	public static void ex12() {
		int a, b, c, d, t;
		System.out.print("Nota1:");
		a = sc.nextInt();
		System.out.print("Nota2:");
		b = sc.nextInt();
		System.out.print("Nota3:");
		c = sc.nextInt();
		System.out.print("Nota4:");
		d = sc.nextInt();
		System.out.print("Teza:");
		t = sc.nextInt();
		System.out.println("Media notelor:" + ((a + b + c + d) / 4));
		System.out.println("Media notelor cu teza:" + ((3 * ((a + b + c + d) / 4) + t) / 4));
	}
	public static void ex13() {
		double x, y;
		System.out.print("x=");
		x = sc.nextDouble();
		System.out.print("y=");
		y = sc.nextDouble();
		if(x > y) {
			System.out.println(x);
		}else if (x < y) {
			System.out.println(y);
		}else{
			System.out.println("Numerele sunt egale.");
		}
	}
	public static void ex14() {
		int a, b, c, i;
		System.out.print("a=");
		a = sc.nextInt();
		System.out.print("b=");
		b = sc.nextInt();
		System.out.print("c=");
		c = sc.nextInt();
		if(a > b) {
			i = a;
			a = b;
			b = i;
		}
		if(b > c) {
			i = b;
			b = c;
			c = i;
		}
		if(a > c) {
			i = a;
			a = c;
			c = i;
		}
		System.out.println(a + ", " + b + ", " + c);
	}
	public static void ex15() {
		int a, b, c, i;
		System.out.print("a=");
		a = sc.nextInt();
		System.out.print("b=");
		b = sc.nextInt();
		System.out.print("c=");
		c = sc.nextInt();
		if(a < b) {
			i = a;
			a = b;
			b = i;
		}
		if(b < c) {
			i = b;
			b = c;
			c = i;
		}
		if(a < c) {
			i = a;
			a = c;
			c = i;
		}
		System.out.println(a + ", " + b + ", " + c);
	}
	public static void ex16() {
		int n;
		System.out.print("n=");
		n = sc.nextInt();
		double r = Math.sqrt(n);
		if(Math.round(r) == r) {
			System.out.println("Numarul este patrat perfect.");
		}else {
			System.out.println("Numarul nu este patrat perfect.");
		}
	}
	public static void ex17() {
		int c1, c2;
		System.out.print("Primul copil:");
		c1 = sc.nextInt();
		System.out.print("Al doilea copil:");
		c2 = sc.nextInt();
		if(c1 > c2) {
			System.out.println("Varsta primului copil este mai mare cu " + (c1 - c2) + " an(i).");
		}
		if(c1 < c2) {
			System.out.println("Varsta celui de-al doilea copil este mai mare cu " + (c2 - c1) + " an(i).");
		}
		if(c1 == c2) {
			System.out.println("Varstele copiilor sunt egale.");
		}
	}
	public static void ex18() {
		int n;
		System.out.print("Anul:");
		n = sc.nextInt();
		if(n%4 == 0) {
			System.out.println("este bisect.");
		}else {
			System.out.println("nu este bisect.");
		}
	}

}
