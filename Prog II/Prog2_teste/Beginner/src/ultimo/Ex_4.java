package ultimo;

import java.util.Scanner;

public class Ex_4 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double x, y;
		
		System.out.println("Digite os valores de X e Y, respectivamente");
		x = sc.nextDouble();
		y = sc.nextDouble();
		Ponto_Ex_4 a = new Ponto_Ex_4(x, y);
		
		System.out.println("Digite os valores de X e Y, respectivamente");
		x = sc.nextDouble();
		y = sc.nextDouble();
		Ponto_Ex_4 b = new Ponto_Ex_4(x, y);
		
		System.out.println("Distancia entre os Pontos A e B = " + distancia(a, b));
	
	}
	
	public static double distancia(Ponto_Ex_4 a, Ponto_Ex_4 b) {
		double aux = 0;
		aux = Math.pow((b.x - a.x), 2) + Math.pow((b.y - a.y), 2);
		aux = Math.sqrt(aux);
		return aux;
	}

}