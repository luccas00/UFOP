package jogoDaVelha;

import java.util.Scanner;

public class Player {

	private String nome;
	private StatusPlace status;
	
	Scanner sc = new Scanner(System.in);
	
	public String getNome() {
		return this.nome;
	}
	
	public StatusPlace getStatus() {
		return this.status;
	}
	
	public void setNome() {
		String nome;
		System.out.println(this.status + " - Digite seu nome: ");
		nome = sc.nextLine();
		this.nome = nome;
	}
	
	public void setStatus(StatusPlace status) {
		this.status = status;
	}
	
	
	
	
	

}


