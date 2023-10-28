package ultimo;

public class Alunos_Ex_3 {
	
	private String nome;
	private double nota_a;
	private double nota_b;
	private double nota_c;
	private int turma;
	
	
	public Alunos_Ex_3(String nome) {
		setNome(nome);
	}
	
	public void setNotas(double a, double b, double c) {
		setNotaA(a);
		setNotaB(b);
		setNotaC(c);
	}
	
	public void imprimeDados() {
		System.out.println("- - - - -");
		System.out.println("Nome: " + getNome());
		System.out.println("Turma [" + getTurma() + "]");
		System.out.println("Nota A = " + getNotaA());
		System.out.println("Nota B = " + getNotaB());
		System.out.println("Nota C = " + getNotaC());
		System.out.println("Media = " + (getNotaA()+getNotaB()+getNotaC())/3);
	}
	
	public void setTurma(int turma) {
		this.turma = turma;
	}
	
	private int getTurma() {
		return this.turma;
	}
	
	private String getNome() {
		return nome;
	}
	
	private void setNome(String nome) {
		this.nome = nome;
	}
	
	private double getNotaA() {
		return this.nota_a;
	}
	
	private void setNotaA(double nota) {
		this.nota_a = nota;
	}
	
	private double getNotaB() {
		return this.nota_b;
	}
	
	private void setNotaB(double nota) {
		this.nota_b = nota;
	}
	
	private double getNotaC() {
		return this.nota_c;
	}
	
	private void setNotaC(double nota) {
		this.nota_c = nota;
	}
	
	
	
}
