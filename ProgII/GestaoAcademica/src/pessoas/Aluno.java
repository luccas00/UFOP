package pessoas;

public class Aluno extends Pessoas {

	private String matricula;
	private String curso;
	
	private static int MaximoDeAlunos = 10;
	private static int ContadorDeAlunos = 0;
	
	public Aluno(String nome, String matricula) {
		super(nome);
		setMatricula(matricula);
		Aluno.ContadorDeAlunos++;
	}
	 
	public static int getMaximoDeAlunos() {
		return MaximoDeAlunos;
	}

	public static int GetContadorDeAlunos() {
		return Aluno.ContadorDeAlunos;
	}

	private boolean validaMatricula(String matricula) {
		
		if (matricula.equals("") || matricula.equals(null)) {
			return false;
		}
		
		String var[] = matricula.split("\\.");
		if (var.length != 2) {
			return false;
		}
		
		int ano = Integer.parseInt(var[0]);
		if (ano < 2000 || ano > 2022) {
			return false;
		}
		
		if (var[1].equals("01") || var[1].equals("02")) {
			return true;
		} else {
			return false;
		}
		
	}
	
	private void setMatricula(String matricula) {
		String endMatricula;
		final String matriculaFinal;
		if (validaMatricula(matricula)) {
			endMatricula = Pessoas.getMatriculaAluno(4);
			matriculaFinal = matricula.concat(".") .concat(endMatricula);
			this.matricula = matriculaFinal;
		} else {
			System.out.println("Matricula Invalida");
		}
		
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
	
	@Override
	public String toString() {
		return "- Aluno -" + super.toString() + "\nMatricula: " + getMatricula() + "\nCurso: " + getCurso();
	}
	
	
	
	
	
	
	
}
