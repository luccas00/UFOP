package principal;

public class Controlador {
	
	public static void main(String[] args) {
		
		Calculator c1 = new Calculator();
		
		double a = 0, b = 0;
		
		double result1 = 0, result2 = 0;
		
		try {
			result1 = c1.div(1, 2);
		} catch (OperacaoInvalidaException e) {
			System.out.println(e.getMsg());
		}
		
		try {
			result2 = c1.log10(1000);
		} catch (OperacaoInvalidaException e) {
			System.out.println(e.getMsg());
		}
		
		System.out.println(result1);
		System.out.println(result2);
		
		try {
			result1 = c1.div(1, 0);
		} catch (OperacaoInvalidaException e) {
			System.out.println(e.getMsg());
		}
		
		try {
			result2 = c1.log10(0);
		} catch (OperacaoInvalidaException e) {
			System.out.println(e.getMsg());
		}
		
		
	}

}
