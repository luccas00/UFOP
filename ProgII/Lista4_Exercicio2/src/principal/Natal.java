package principal;

import java.time.*;
import java.time.format.DateTimeFormatter;

public class Natal extends CartaoWeb{

	private LocalDate data = LocalDate.of(LocalDate.now().getYear(), 12, 25);
	private String nome = "Natal";
	
	public Natal(String destinatario)
	{
		super(destinatario);
	}
	
	public void showMessage()
	{
		System.out.println("Nome: " + this.nome);
		System.out.println("Destinatario: " + super.getDestinatario());
		System.out.println("Data: " + this.getData());
	}

	public String getData() {
		DateTimeFormatter formato = DateTimeFormatter.ofPattern("dd/MM/yyyy");
		String dataFormatada = data.format(formato);
		return dataFormatada;
	}
	
}
