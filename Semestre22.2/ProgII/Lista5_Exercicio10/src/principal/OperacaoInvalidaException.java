package principal;

public class OperacaoInvalidaException extends RuntimeException{

	private String msg;
	
	public OperacaoInvalidaException (String msg) {
		this.msg = msg;
	}
	
	public String getMsg() {
		return this.msg;
	}
}
