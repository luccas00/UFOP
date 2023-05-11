package modulo_1;

public class CopiaReferencia {
	
	public static void main(String[] args) {
		
		double x = 1, y = 3;
		

		System.out.println("Valor de X: " + x);
		System.out.println("Valor de Y: " + y);

		alteraValor(x, y);
		System.out.println("Valor de X: " + x);
		System.out.println("Valor de Y: " + y);
		
		int numbers[] = new int[5];
		for (int i = 0; i < numbers.length; i++) {
			numbers[i] = (i+1)*3;
			System.out.println(" " + numbers[i]);
		}
		
		alteraVetor(numbers);
		
		for (int i = 0; i < numbers.length; i++) {
			System.out.println(" " + numbers[i]);
		}
	}
	
	//Passagem por copia, variavel primitiva
	public static void alteraValor(double a, double b) {
		a = 999999;
		b = 100000;
	}
	
	//Passagem por referencia, Objeto Java, todo Vetor é Objeto
	public static void alteraVetor(int v[]) {
		v[0] = 0;
		v[1] = 0;
		v[2] = 0;
		v[3] = 0;
		v[4] = 0;
	}

}
