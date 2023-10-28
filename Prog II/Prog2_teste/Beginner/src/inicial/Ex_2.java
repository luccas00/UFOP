package inicial;

import java.util.Scanner;

public class Ex_2 {

	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b, soma, subtrai, divide, multiplica;
		
		System.out.println("Digite dois numeros inteiros");
		a = sc.nextInt();
		b = sc.nextInt();
		
		soma = a+b;
		subtrai = a-b;
		divide = a/b;
		multiplica = a*b;
		
		System.out.println("Soma [" + a + "] + [" + b + "] = [" + soma + "]");
		System.out.println("Subtraçao [" + a + "] - [" + b + "] = [" + subtrai + "]");
		System.out.println("Divisão [" + a + "] / [" + b + "] = [" + divide + "]");
		System.out.println("Multiplicação [" + a + "] * [" + b + "] = [" + multiplica + "]");
		
	}

}
