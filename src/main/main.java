package main;
import java.util.Scanner;
import main.Primele10ex;

public class main {
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		do {
			System.out.print("Exercitiul(0 = iesire): ");
			n = sc.nextInt();
			switch(n) {
			case 1:
				Primele10ex.ex1();
				break;
			case 2:
				Primele10ex.ex2();
				break;
			case 3:
				Primele10ex.ex3();
				break;
			case 4:
				Primele10ex.ex4();
				break;
			case 5:
				Primele10ex.ex5();
				break;
			case 6:
				Primele10ex.ex6();
				break;
			case 7:
				Primele10ex.ex7();
				break;
			}
		}while(n != 0);
	}
	
}
