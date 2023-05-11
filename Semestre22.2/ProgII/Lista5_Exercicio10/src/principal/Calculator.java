package principal;

public class Calculator {
	
	private double a;
	private double b;
	
	public double div(double a, double b) throws OperacaoInvalidaException {
		if (b == 0) {
			OperacaoInvalidaException e = new OperacaoInvalidaException("Operacao Invalida, Divisao por 0");
			throw e;	
		} else {
			return a/b;
		}
	}
	
	public double log10(double a) throws OperacaoInvalidaException {
		if (a == 0) {
			OperacaoInvalidaException e = new OperacaoInvalidaException("Operacao Invalida, Log de 0");
			throw e;
		} else {
			return Math.log10(a);
		}
	}

}
