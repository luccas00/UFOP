package jogoDaVelha;

import java.util.Scanner;

public class Tabuleiro {
	
	int a, b;
	private String tabuleiro[][] = new String[3][3];
	Scanner sc = new Scanner(System.in);

	private static int rodada = 1;
		
	public static int getRodada() {
		return Tabuleiro.rodada;
	}

	public Tabuleiro() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				this.tabuleiro[i][j] = " ";
			}
		}
	}
	
	public void iniciarJogo() {
		exibeCoordenadas();
		System.out.println("Digite o numero da casa desejada de acordo com o tabuleiro acima");
		System.out.println("- - - - -");
		System.out.println("Jogador 1 joga com, X");
		System.out.println("Jogador 2 joga com, O");
		System.out.println("- - - - -");
		System.out.println("Jogador 1 Sempre comeca");
		System.out.println("- - - - -");
	}
	
	public boolean validaCoordenada(int a, Player qualquer) {
		
		switch (a) {
		case 1:
			if (this.tabuleiro[2][0] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[2][0] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 2:
			if (this.tabuleiro[2][1] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[2][1] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 3:
			if (this.tabuleiro[2][2] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[2][2] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 4:
			if (this.tabuleiro[1][0] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[1][0] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 5:
			if (this.tabuleiro[1][1] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[1][1] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 6:
			if (this.tabuleiro[1][2] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[1][2] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 7:
			if (this.tabuleiro[0][0] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[0][0] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		case 8:
			if (this.tabuleiro[0][1] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[0][1] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
		case 9:
			if (this.tabuleiro[0][2] == StatusPlace.VAZIO.getStatusPlace()) {
				this.tabuleiro[0][2] = qualquer.getStatus().getStatusPlace();
				return true;
			} else {
				return false;
			}
			
		}
		
		return false;
		
	}
	
	public void coordenadasJogada(Player qualquer) {
		System.out.println(qualquer.getStatus() + " - " + qualquer.getNome());
		System.out.println("Digite a casa desejada");
		a = sc.nextInt();
		if (a > 9 || a <= 0) {
			System.out.println("Coordenada Invalida, jogue novamente");
			coordenadasJogada(qualquer);
		} else {
			if (validaCoordenada(a, qualquer) == true) {
				Tabuleiro.rodada++;
				System.out.println("Rodada N: " + Tabuleiro.getRodada());
			} else {
				System.out.println("Casa ja ocupada, jogue novamente");
				coordenadasJogada(qualquer);
			}
		}

	}
	
	public boolean confereTabuleiro() {
		
		for (int i = 0; i < 3; i++) {
			if (this.tabuleiro[i][0].equals(this.tabuleiro[i][1]) && this.tabuleiro[i][1].equals(this.tabuleiro[i][2]) && this.tabuleiro[i][0] != StatusPlace.VAZIO.getStatusPlace()) {
				if (this.tabuleiro[i][0].equals(StatusPlace.JOGADOR_2.getStatusPlace())) {
					System.out.println("Jogador 2 Venceu !!");
					exibeTabuleiro();
					return true;
				} else if (this.tabuleiro[i][0].equals(StatusPlace.JOGADOR_1.getStatusPlace())) {
					System.out.println("Jogador 1 Venceu !!");
					exibeTabuleiro();
					return true;
				}
				
			} else if (this.tabuleiro[0][i].equals(tabuleiro[1][i]) && this.tabuleiro[1][i].equals(this.tabuleiro[2][i]) && this.tabuleiro[0][i] != StatusPlace.VAZIO.getStatusPlace()) {
				if (this.tabuleiro[0][i].equals(StatusPlace.JOGADOR_2.getStatusPlace())) {
					System.out.println("Jogador 2 Venceu !!");
					exibeTabuleiro();
					return true;
				} else if (this.tabuleiro[0][i].equals(StatusPlace.JOGADOR_1.getStatusPlace())) {
					System.out.println("Jogador 1 Venceu !!");
					exibeTabuleiro();
					return true;
				}
			}	
			
		}
		
		if (this.tabuleiro[0][0].equals(this.tabuleiro[1][1]) && this.tabuleiro[1][1].equals(this.tabuleiro[2][2]) && this.tabuleiro[0][0] != StatusPlace.VAZIO.getStatusPlace()) {
			if (this.tabuleiro[0][0].equals(StatusPlace.JOGADOR_2.getStatusPlace())) {
				System.out.println("Jogador 2 Venceu !!");
				exibeTabuleiro();
				return true;
			} else if (this.tabuleiro[0][0].equals(StatusPlace.JOGADOR_1.getStatusPlace())) {
				System.out.println("Jogador 1 Venceu !!");
				exibeTabuleiro();
				return true;
			}
		} else if (this.tabuleiro[0][2].equals(tabuleiro[1][1]) && this.tabuleiro[1][1].equals(this.tabuleiro[2][0]) && this.tabuleiro[0][2] != StatusPlace.VAZIO.getStatusPlace()) {
			if (this.tabuleiro[0][2].equals(StatusPlace.JOGADOR_2.getStatusPlace())) {
				System.out.println("Jogador 2 Venceu !!");
				exibeTabuleiro();
				return true;
			} else if (this.tabuleiro[0][2].equals(StatusPlace.JOGADOR_1.getStatusPlace())) {
				System.out.println("Jogador 1 Venceu !!");
				exibeTabuleiro();
				return true;
			}
		}
		
		return false;
	}
	
	public void exibeTabuleiro() {
		System.out.print("[" + this.tabuleiro[0][0] + "]");
		System.out.print("[" + this.tabuleiro[0][1] + "]");
		System.out.println("[" + this.tabuleiro[0][2] + "]");
		System.out.print("[" + this.tabuleiro[1][0] + "]");
		System.out.print("[" + this.tabuleiro[1][1] + "]");
		System.out.println("[" + this.tabuleiro[1][2] + "]");
		System.out.print("[" + this.tabuleiro[2][0] + "]");
		System.out.print("[" + this.tabuleiro[2][1] + "]");
		System.out.println("[" + this.tabuleiro[2][2] + "]");
	}
	
	public boolean confereVelha() {
		
		if ((Tabuleiro.rodada > 9) && (confereTabuleiro() == false)) {
			System.out.println("Deu velha !!");
			exibeTabuleiro();
			return true;
		}
		
		return false;
		
	}
	
	public void exibeCoordenadas() {
		System.out.print("[" + "7" + "]");
		System.out.print("[" + "8" + "]");
		System.out.println("[" + "9" + "]");
		System.out.print("[" + "4" + "]");
		System.out.print("[" + "5" + "]");
		System.out.println("[" + "6" + "]");
		System.out.print("[" + "1" + "]");
		System.out.print("[" + "2" + "]");
		System.out.println("[" + "3" + "]");
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
