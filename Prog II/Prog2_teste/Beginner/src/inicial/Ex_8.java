package inicial;

import java.util.Scanner;

public class Ex_8 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double temp_cel, temp_fahr;
		
		System.out.println("Digite a temperatura em graus Fahrenheit");
		temp_fahr = sc.nextDouble();
		
		temp_cel = (temp_fahr*5-160)/9;
		System.out.println("Temperatura em graus Celsius = " + temp_cel);
		
	}

}