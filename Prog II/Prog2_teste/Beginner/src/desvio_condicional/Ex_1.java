package desvio_condicional;

import java.util.Scanner;

public class Ex_1 {
	
	public static void main(String[] args) {
	
		
		double a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3;
		
		double result[] = new double[4];
		
		result[0] = ((c+d)*a)/((e+f)/b);
		result[1] = (Math.pow(a, (b+c))/(e+f))+d;
		result[2] = (((Math.pow((c+d), 2)/(b*b))*d)+a)/(1/c);
		result[3] = (-b+Math.sqrt((b*b)-4*a*c))/2*a;

		System.out.println(result[0]);
		System.out.println(result[1]);
		System.out.println(result[2]);
		System.out.println(result[3]);
		
	}	

}
