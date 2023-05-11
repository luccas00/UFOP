package principal;

public class Vendedor extends Empregado{
	
	private double valorVendas;
	private int qtdVendas;
	
	public Vendedor(String _nome, int _idade, String _matricula, double _valorVendas)
	{
		super(_nome, _idade, _matricula);
		setValorVendas(_valorVendas);
	}

	public double getValorVendas() {
		return valorVendas;
	}

	public int getQtdVendas() {
		return qtdVendas;
	}

	public void setValorVendas(double valorVendas) {
		this.valorVendas = valorVendas;
	}

	public void setQtdVendas(int qtdVendas) {
		this.qtdVendas = qtdVendas;
	}
	
	@Override
	public String toString()
	{
		return "\nNome: " + super.getNome() + "\nSalario R$ " + super.getSalario() + 
				"\nValor das Vendas R$ " + getValorVendas() + "\nQuantidade de Vendas: " + getQtdVendas();
	}
	

}
