package principal;

public abstract class CartaoWeb {
	
	private String destinatario;
	
	public CartaoWeb(String destinatario)
	{
		setDestinatario(destinatario);
	}
	
	public abstract void showMessage();

	public String getDestinatario()
	{
		return this.destinatario;
	}
	
	private void setDestinatario(String destinatario)
	{
		this.destinatario = destinatario;
	}
	
}
