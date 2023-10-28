package prova1;

public class IngressoVip extends Ingresso{
	
	private double add;
	
	public IngressoVip () {
		
		
	}
	
	public double getValorIngressoVip() {
		double valor_vip;
		valor_vip = this.getAdd() + super.getValor();
		return valor_vip;
	}
	
	public void setAdd(double aux) {
		this.add = aux;
	}

	public double getAdd() {
		return add;
	}
	
}
