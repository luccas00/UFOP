package pessoas;

import java.util.*;

import componentes.ComponentesPessoas;

public abstract class Pessoas extends ComponentesPessoas
implements iPessoa, Comparable<Pessoas> {
	
	Scanner sc = new Scanner(System.in);
	
	private String nome;
	private String cpf;
	private int anoNascimento;
	private int mesNascimento;
	private int diaNascimento;
	
	public Pessoas(String nome) {
		setNome(nome);
		setCpf();
		setNascimento();
	}
	
	public void imprimeObjeto() {
		System.out.println("Nome: " + getNome());
		System.out.println("CPF: " + getCpf());
		System.out.println("Data de Nascimento: " + getDiaNascimento() + "/" + getMesNascimento() + "/" + getAnoNascimento());
	}
	
	private void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public String getCpf() {
		return this.cpf;
	}
	
	private void setCpf() {
		String cpf = ComponentesPessoas.geradorDeCPF();
		if (validaCpf(cpf)) {
			this.cpf = cpf;
		} else {
			System.out.println("CPF Invalido");
		}
	}
	
	private boolean validaCpf(String cpf) {
		
		if (cpf.equals("") || cpf.equals(null)) {
			return false;
		}
		
		String inicioCPF[] = cpf.split("\\.");
		if (inicioCPF.length != 3) {
			return false;
		}
		
		String finalCPF[] = inicioCPF[2].split("\\-");
		if (finalCPF.length != 2) {
			return false;
		}
		
		int parte[] = new int[4];
		parte[0] = Integer.parseInt(inicioCPF[0]);
		parte[1] = Integer.parseInt(inicioCPF[1]);
		parte[2] = Integer.parseInt(finalCPF[0]);
		parte[3] = Integer.parseInt(finalCPF[1]);
		if (parte[0] < 0 || parte[0] > 999) {
			return false;
		} else if (parte[1] < 0 || parte[1] > 999) {
			return false;
		} else if (parte[2] < 0 || parte[2] > 999) {
			return false;
		} else if (parte[3] < 0 || parte[3] > 99) {
			return false;
		}
		
		if (finalCPF[1].equals("00")) {
			return false;
		}
		
		if (inicioCPF[0].equals(inicioCPF[1]) || inicioCPF[1].equals(finalCPF[0]) || finalCPF[0].equals(inicioCPF[0])) {
			return false;
		}
		
		return true;
		
	}

	public int getAnoNascimento() {
		return anoNascimento;
	}

	public int getMesNascimento() {
		return mesNascimento;
	}

	public int getDiaNascimento() {
		return diaNascimento;
	}

	private void setNascimento() {
		Random rand = new Random();
		this.anoNascimento = rand.nextInt(1980, 2002);
		this.mesNascimento = rand.nextInt(1, 13);
		if (this.mesNascimento == 2) {
			this.diaNascimento =  rand.nextInt(1, 29);
		} else {
			this.diaNascimento =  rand.nextInt(1, 32);
		}
	}
	
	@Override
	public int compareTo(Pessoas qualquer) {
		return this.nome.compareTo(qualquer.nome);
	}

	@Override
	public int hashCode() {
		return Objects.hash(nome);
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Pessoas p = (Pessoas)obj;
		if (this.getNome().equals(p.getNome())) {
			return true;
		}
		return false;
	}
	
	@Override
	public String toString() {
		return "\nNome: " + getNome() +
				"\nCPF: " + getCpf() +
				"\nData de Nascimento: " + getDiaNascimento() + "/" + getMesNascimento() + "/" + getAnoNascimento();
	}
	
	

}
