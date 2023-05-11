package modulo1Auxiliar;

public class ManipulandoStringsAuxiliar {
	
	public String nome;
	public int idade;
	private String sobrenome;
	
	public void setSobrenome(String qualquer) {
		this.sobrenome = qualquer;
	}
	
	public String getSobrenome() {
		return this.sobrenome;
	}
	
	public String getNomeCompleto() {
		return this.nome.concat(" ").concat(this.sobrenome);
	}

	public static void nomeVertical(String qualquer) {
		for (int i = 0; i < qualquer.length(); i++) {
			System.out.println(qualquer.charAt(i));
		}
	}
	
	public void nomeVertical() {
		for (int i = 0; i < nome.length(); i++) {
			System.out.println(nome.charAt(i));
		}
	}
	
	public static void nomeMaiusculo(String qualquer) {
		System.out.println(qualquer.toUpperCase());
	}
	
	

}
