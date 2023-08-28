package principal;

import java.util.*;

public class Controlador{
	
	public static void main(String[] args) {
		
		List<Integer> numeros = new ArrayList<Integer>();
		
		Random rand = new Random();
		
		for (int i = 0; i < 50; i++) {
			numeros.add(rand.nextInt(0, 99));
		}

		for (Integer i : numeros) {
			System.out.println(i);
		}
		
		System.out.println("Maior Valor = " + Collections.max(numeros));
		System.out.println("Menor Valor = " + Collections.min(numeros));
		System.out.println("Frequencia do Menor Valor = " + Collections.frequency(numeros, Collections.min(numeros)));
		
		Collections.sort(numeros);
		
		System.out.println("Lista Ordenada");
		for (Integer i : numeros) {
			System.out.println(i);
		}
		
	}

}
