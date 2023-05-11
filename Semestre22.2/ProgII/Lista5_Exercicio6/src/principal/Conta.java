package principal;

public class Conta {
	
	private String id;
	private double saldo;
	private String nome;
	
	public Conta(String id, String nome) {
		setId(id);
		setNome(nome);
		setSaldo(0);
	}

	public String getId() {
		return this.id;
	}

	public double getSaldo() {
		return this.saldo;
	}

	public String getNome() {
		return this.nome;
	}

	public void setId(String id) {
		this.id = id;
	}

	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void deposita(double value) {
		this.saldo += value;
	}
	
	public void saque(double value) throws ContaException {
		if (value > this.getSaldo()) {
			ContaException e = new ContaException("Valor do saque maior que o disponivel");
			throw e;
		} else {
			this.saldo -= value;
		}
	}
	
	@Override
	public String toString() {
		return "Conta: " + this.getId() + "\nNome: " + this.getNome() + "\nSaldo R$ " + this.getSaldo(); 
	}
	
}


