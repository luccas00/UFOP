package componentes;

public class ComponentesPessoas {
	
	protected static String getMatriculaAluno(int n) {
		
		String base = "927486351";
		StringBuilder sbBase = new StringBuilder(n);
		
		for (int i = 0; i < n; i ++) {
			int index = (int)(base.length()* Math.random());
			sbBase.append(base.charAt(index));
		}
		return sbBase.toString();
	}
	
	protected static String getMatriculaProfessor(int n) {
		
		String base = "927486351" + "ABC";
		StringBuilder sbBase = new StringBuilder(n);
		
		for (int i = 0; i < n; i ++) {
			int index = (int)(base.length()* Math.random());
			sbBase.append(base.charAt(index));
		}
		
		return sbBase.toString();
	}
	
	protected static String geradorDeCPF() {
		
		final int n3 = 3;
		final int n2 = 2;
		String base = "9274806351";
		StringBuilder sbCPF1 = new StringBuilder(n3);
		StringBuilder sbCPF2 = new StringBuilder(n3);
		StringBuilder sbCPF3 = new StringBuilder(n3);
		StringBuilder sbCPF4 = new StringBuilder(n2);
		
		for (int i = 0; i < n3; i ++) {
			int index = (int)(base.length()* Math.random());
			sbCPF1.append(base.charAt(index));
		}
		
		for (int i = 0; i < n3; i ++) {
			int index = (int)(base.length()* Math.random());
			sbCPF2.append(base.charAt(index));
		}
		
		for (int i = 0; i < n3; i ++) {
			int index = (int)(base.length()* Math.random());
			sbCPF3.append(base.charAt(index));
		}
		
		for (int i = 0; i < n2; i ++) {
			int index = (int)(base.length()* Math.random());
			sbCPF4.append(base.charAt(index));
		}
		String cpfGerado = sbCPF1.toString().concat(".").concat(sbCPF2.toString().concat(".").concat(sbCPF3.toString().concat("-").concat(sbCPF4.toString())));
		return cpfGerado;
	}
	
}
