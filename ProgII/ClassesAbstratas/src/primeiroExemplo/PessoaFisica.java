package primeiroExemplo;

public class PessoaFisica extends Pessoa {

	private String cpf;
	private double salarioAnual;
	
	public PessoaFisica(String nome, int idade, String telefone, String email, String cpf)
	{
		super(nome, idade, telefone, email);
		setCpf(cpf);
		System.out.print(this.getNome() + ", digite seu salario anual R$");
		setSalarioAnual(sc.nextDouble());
	}
	
	@Override
	public void pagarImposto() {
		double imposto = getSalarioAnual() * 0.1;
		System.out.println(this.getNome() + " pagando imposto...");
		System.out.println("Imposto pago. Valor R$ " + imposto);
	}
	
	@Override
	public void imprimirDados()
	{
		super.imprimirDados();
		System.out.println("CPF: " + this.getCpf());
		System.out.println("Salario Anual R$ " + this.getSalarioAnual());
	}

	public String getCpf() {
		return this.cpf;
	}

	private void setCpf(String cpf) {
		this.cpf = cpf;
	}
	
	public double getSalarioAnual() {
		return this.salarioAnual;
	}
	
	public void setSalarioAnual(double salarioAnual) {
		this.salarioAnual = salarioAnual;
	}

}
