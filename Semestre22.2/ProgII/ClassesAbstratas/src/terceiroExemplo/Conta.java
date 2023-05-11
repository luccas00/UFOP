package terceiroExemplo;

public abstract class Conta extends Componentes{

	private String idConta;
	private double saldo;
	private static int qtdContas = 0;
	
	public Conta(double saldo)
	{
		if (validaSaldo(saldo)) {
			setSaldo(saldo);
			this.idConta = GerarIdConta();
			Conta.qtdContas++;
		} else {
			throw new IllegalArgumentException("Saldo Invalido");
		}
	}
	
	public abstract void operacaoCredito(double value);
	public abstract void operacaoDebito(double value);
	
	public static int qtdContas() {
		return Conta.qtdContas;
	}
	
	public String getIdConta() {
		return this.idConta;
	}
	
	public double getSaldo() {
		return this.saldo;
	}

	private void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	
	public void realizarSaque(double value) {
		if (validaSaque(value)) {
			setSaldo(getSaldo()-value);
			System.out.println("Saque, Sucesso !");
		} else {
			throw new IllegalArgumentException("Valor de Saque Invalido");
		}
	}
	
	public void realizarDeposito(double value) {
		if (value > 0) {
			setSaldo(getSaldo()+value);
			System.out.println("Deposito, Sucesso !");
		}
	}

	public boolean validaSaque(double saque) {
		if(getSaldo() == 0) {
			return false;
		} else if (saque > getSaldo()) {
			return false;
		} else {
			return true;
		}
	}
	
	public boolean validaSaldo(double saldo) {
		if (saldo < 0)
			return false;
		else
			return true;
	}
	
}
