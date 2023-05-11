package principal;

import java.time.*;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class Aniversario extends CartaoWeb{
	
	private LocalDate data;
	private String nome = "Aniversario";
	Scanner sc = new Scanner(System.in);
	int dia, mes;
	
	public Aniversario(String destinatario)
	{
		super(destinatario);
		System.out.println("Digite o numero correspondente ao mes do aniversario");
		mes = sc.nextInt();
		System.out.println("Digite o dia do aniversario");
		dia = sc.nextInt();
		this.data = LocalDate.of(LocalDate.now().getYear(), mes, dia);
		
	}
	
	public String getData() {
		DateTimeFormatter formato = DateTimeFormatter.ofPattern("dd/MM/yyyy");
		String dataFormatada = data.format(formato);
		return dataFormatada;
	}
	
	public void showMessage()
	{
		System.out.println("Nome: " + this.nome);
		System.out.println("Destinatario: " + super.getDestinatario());
		System.out.println("Data: " + this.getData());
	}

}
