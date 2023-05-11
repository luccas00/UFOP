package br.ufop.agenda;

public class AppAgenda {
	
	public static void main(String[] args) {
		
		Agenda agenda = new Agenda(10);
		agenda.executa();
		System.out.println("Programa finalizado com sucesso!!!!");
		
		Contato.Cria();
		
	}
}
