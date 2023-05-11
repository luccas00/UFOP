package pessoas;

public class Aluno extends Pessoas {

	private String matricula;
	private String curso;
	
	private static int MaximoDeAlunos = 10;
	private static int ContadorDeAlunos = 0;
	
	public Aluno(String nome, String cpf, String matricula) {
		super(nome, cpf);
		setMatricula(matricula);
		Aluno.ContadorDeAlunos++;
	}
	 
	public static int getMaximoDeAlunos() {
		return MaximoDeAlunos;
	}

	public static int GetContadorDeAlunos() {
		return Aluno.ContadorDeAlunos;
	}
	
	private void setMatricula(String matricula) {
		this.matricula = matricula;
	}
	
	public String getMatricula() {
		return this.matricula;
	}
	
	public void setCurso(String curso) {
		this.curso = curso;
	}
	
	public String getCurso() {
		return this.curso;
	}
	
	@Override
	public void imprimeObjeto() {
		System.out.println("- Aluno -");
		super.imprimeObjeto();
		System.out.println("Matricula: " + getMatricula());
		System.out.println("Curso: " + getCurso());
	}
	
}
