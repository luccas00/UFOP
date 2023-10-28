package inicial;

import java.util.Scanner;

public class Ex_7 {
	
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double temp_cel, temp_fahr;
		
		System.out.println("Digite a temperatura em graus Centigrados");
		temp_cel = sc.nextDouble();
		
		temp_fahr = (9*temp_cel+160)/5;
		System.out.println("Temperatura em graus Fahrenheit = " + temp_fahr);
		
	}

}
