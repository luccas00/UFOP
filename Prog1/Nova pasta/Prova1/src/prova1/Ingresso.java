package prova1;

public class Ingresso {
	
	private double valor;
	
	public Ingresso () {

		
	}
	
	public void imprimeValor(Ingresso qualquer) {
		
		System.out.println("Valor do Ingresso Comum R$" + getValor());
		
	}

	public void setValor(double aux) {
		this.valor = aux;
	}
	
	public double getValor() {
		return valor;
	}

}
