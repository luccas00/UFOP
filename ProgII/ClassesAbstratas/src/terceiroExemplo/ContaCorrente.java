package terceiroExemplo;

public class ContaCorrente extends Conta {

	private double taxaOperacao = 0.05;
	private double valorCredito = 1000;
	
	public ContaCorrente(double saldo) {
		super(saldo);
	}
	
	public ContaCorrente(double saldo, double taxa) {
		super(saldo);
		setTaxaOperacao(taxa);
	}
	
	public ContaCorrente(double saldo, double taxa, double credito) {
		super(saldo);
		setTaxaOperacao(taxa);
		setValorCredito(credito);
	}
	
	public double getValorCredito() {
		return this.valorCredito;
	}

	private void setValorCredito(double valorCredito) {
		this.valorCredito = valorCredito;
	}

	public double getTaxaOperacao() {
		return this.taxaOperacao;
	}

	private void setTaxaOperacao(double taxaOperacao) {
		this.taxaOperacao = taxaOperacao;
	}

	@Override
	public String toString() {
		return "Tipo: " + this.getClass().getSimpleName() + "\nNumero da Conta: " + this.getIdConta() + "\nSaldo: " + this.getSaldo() + 
				"\nTaxa de Operacao: " + getTaxaOperacao() + "\nLinha de Credito R$ " + getValorCredito() + "\n";
		
	}

	@Override
	public void operacaoCredito(double value) {
	}

	@Override
	public void operacaoDebito(double value) {
		if (validaSaque(value+taxaOperacao)) {
			this.realizarSaque(value+taxaOperacao);
			System.out.println("Operacao Debito, Sucesso !");
		} else {
			System.out.println("Erro, valor invalido");
		}
	}

}
