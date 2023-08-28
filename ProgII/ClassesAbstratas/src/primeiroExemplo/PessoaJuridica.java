package primeiroExemplo;

public class PessoaJuridica extends Pessoa {

	private String cnpj;
	private double rendimentoAnual;
	
	public PessoaJuridica(String nome, int idade, String telefone, String email, String cnpj)
	{
		super(nome, idade, telefone, email);
		setCnpj(cnpj);
		System.out.print(this.getNome() + ", digite seu rendimento anual R$");
		setRendimentoAnual(sc.nextDouble());
	}
	
	@Override
	public void pagarImposto() {
		double imposto = getRendimentoAnual() * 0.07;
		System.out.println(this.getNome() + " pagando imposto...");
		System.out.println("Imposto pago. Valor R$ " + imposto);
	}
	
	@Override
	public void imprimirDados()
	{
		super.imprimirDados();
		System.out.println("CNPJ: " + this.getCnpj());
		System.out.println("Rendimento Anual R$ " + this.getRendimentoAnual());
	}

	public String getCnpj() {
		return this.cnpj;
	}

	private void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}
	
	public double getRendimentoAnual() {
		return this.rendimentoAnual;
	}
	
	public void setRendimentoAnual(double rendimentoAnual) {
		this.rendimentoAnual = rendimentoAnual;
	}
	
	

}
