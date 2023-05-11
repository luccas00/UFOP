package secundario;

public class TermometroCelsius implements MedidorCelsius {
	
	private MedidorFarenheit fahrenheit;
	
	public TermometroCelsius(MedidorFarenheit farenheit) {
		this.fahrenheit = farenheit;
	}
	
	@Override
	public double medirTemperatura() {
		return (fahrenheit.getTemperaturaFarenheit() - 32)/1.8;
	}

}
