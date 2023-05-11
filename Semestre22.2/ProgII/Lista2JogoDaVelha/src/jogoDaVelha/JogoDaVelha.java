package jogoDaVelha;

public class JogoDaVelha {
	
	public static void main(String[] args) {
		
		Tabuleiro tabuleiro = new Tabuleiro();
		
		Player jogador1 = new Player();
		Player jogador2 = new Player();
		
		jogador1.setStatus(StatusPlace.JOGADOR_1);
		jogador2.setStatus(StatusPlace.JOGADOR_2);
		jogador1.setNome();
		jogador2.setNome();

		tabuleiro.iniciarJogo();
		
		do {
			tabuleiro.exibeTabuleiro();
			tabuleiro.coordenadasJogada(jogador1);
			if (tabuleiro.confereTabuleiro() == true) {
				break;
			}
			if (tabuleiro.confereVelha() == true) {
				break;
			}
			tabuleiro.exibeTabuleiro();
			tabuleiro.coordenadasJogada(jogador2);
			if (tabuleiro.confereTabuleiro() == true) {
				break;
			}
		} while (tabuleiro.confereTabuleiro() == false && tabuleiro.confereVelha() == false);		
		
	}

}
