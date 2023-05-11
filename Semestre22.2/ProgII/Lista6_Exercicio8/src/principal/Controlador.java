package principal;

import secundario.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		MedidorFarenheit farenheit = new MedidorFarenheit();
		TermometroCelsius termometro = new TermometroCelsius(farenheit);
		System.out.println(farenheit.getTemperaturaFarenheit());
		System.out.println(termometro.medirTemperatura());
		
	}

}
