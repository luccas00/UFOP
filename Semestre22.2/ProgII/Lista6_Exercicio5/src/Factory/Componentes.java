package Factory;

public class Componentes {
	
	protected static String geradorDeChassi() {
		
		final int n1 = 4;
		final int n2 = 2;
		
		String base = "9274806351";
		String base2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		
		StringBuilder sbChassi1 = new StringBuilder(n1);
		StringBuilder sbChassi2 = new StringBuilder(n2);
		
		for (int i = 0; i < n2; i ++) {
			int index = (int)(base2.length()* Math.random());
			sbChassi2.append(base2.charAt(index));
		}
		
		for (int i = 0; i < n1; i ++) {
			int index = (int)(base.length()* Math.random());
			sbChassi1.append(base.charAt(index));
		}
		
		String result = sbChassi2.toString().concat(sbChassi1.toString());
		return result;
	}
	
	protected static String geradorDePlaca() {
		
		final int n1 = 4;
		final int n2 = 3;
		
		String base = "9274806351";
		String base2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		
		StringBuilder sbPlaca1 = new StringBuilder(n1);
		StringBuilder sbPlaca2 = new StringBuilder(n2);
		
		for (int i = 0; i < n1; i ++) {
			int index = (int)(base.length()* Math.random());
			sbPlaca1.append(base.charAt(index));
		}
		
		for (int i = 0; i < n2; i ++) {
			int index = (int)(base2.length()* Math.random());
			sbPlaca2.append(base2.charAt(index));
		}
		
		String result = sbPlaca2.toString().concat("-").concat(sbPlaca1.toString());
		return result;
	}
}
