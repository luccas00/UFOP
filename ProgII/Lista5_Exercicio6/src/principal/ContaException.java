package principal;

public class ContaException extends RuntimeException {
	
	private String msg;
	
	public ContaException (String msg) {
		this.msg = msg;
	}
	
	public String getMensage() {
		return this.msg;
	}
	
}
