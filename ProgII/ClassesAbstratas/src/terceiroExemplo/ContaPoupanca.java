package terceiroExemplo;

public class ContaPoupanca extends Conta {
	
	private double rendimento = 0.0129;
	
	public ContaPoupanca(double saldo)
	{
		super(saldo);
	}
	
	public ContaPoupanca(double saldo, double rendimento)
	{
		super(saldo);
		setRendimento(rendimento);
	}

	public double getRendimento() {
		return rendimento;
	}

	public void setRendimento(double rendimento) {
		this.rendimento = rendimento;
	}
	
	public double calcularRendimento() {
		return this.getSaldo() * this.getRendimento();
	}
	
	@Override
	public String toString() {
		return "Tipo: " + this.getClass().getSimpleName() + "\nNumero da Conta: " + this.getIdConta() + "\nSaldo: " + this.getSaldo() + 
				"\nTaxa de Rendimento: " + getRendimento()*100 + "%\n";
		
	}

	@Override
	public void operacaoCredito(double value) {
		System.out.println("Contas Poupanca nao possuem Operacao Credito");
	}

	@Override
	public void operacaoDebito(double value) {
		if (validaSaque(value)) {
			this.realizarSaque(value);
			System.out.println("Operacao Debito, Sucesso !");
		} else {
			System.out.println("Erro, valor invalido");
		}
	}
	
	

}
