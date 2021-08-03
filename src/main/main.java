package main;
import java.util.Scanner;
import main.Primele10ex;
import main.PanaLaEx20;

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
			case 8:
				Primele10ex.ex8();
				break;
			case 9:
				Primele10ex.ex9();
				break;
			case 10:
				Primele10ex.ex10();
				break;
			case 11:
				PanaLaEx20.ex11();
				break;
			case 12:
				PanaLaEx20.ex12();
				break;
			case 13:
				PanaLaEx20.ex13();
				break;
			case 14:
				PanaLaEx20.ex14();
				break;
			}
		}while(n != 0);
	}

}
