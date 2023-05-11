package modulo1Componentes;

public class GeradorDePlacas {
	
	protected static String getPlacaGerada(int a, int b) {
		
		String letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String numeros = "0927486351";
		
		StringBuilder sbLetras = new StringBuilder(a);
		StringBuilder sbNumeros = new StringBuilder(b);
		
		for (int i = 0; i < a; i++ ) {

			int index = (int)(letras.length()* Math.random());
			sbLetras.append(letras.charAt(index));
	
		}
		
		for (int i = 0; i < b; i++ ) {

			int index = (int)(numeros.length()* Math.random());
			sbNumeros.append(numeros.charAt(index));
	
		}

		return sbLetras.toString() + sbNumeros.toString();
		
	}

}
