package terceiroExemplo;

public class Componentes {
	
	protected static String GerarIdConta() {

		String Letras = "ABC";
		String Numeros = "123456789";
		
		StringBuilder sbLetras = new StringBuilder(2);
		StringBuilder sbNumeros = new StringBuilder(4);
		
		for (int i = 0; i < 2; i++) {
			
			int index = (int)(Letras.length()* Math.random());
			sbLetras.append(Letras.charAt(index));
		}
		
		for (int i = 0; i < 4; i++) {
			
			int index = (int)(Numeros.length()* Math.random());
			sbNumeros.append(Numeros.charAt(index));
		}
		
	return sbLetras.toString().concat(sbNumeros.toString());
	
	}
}
