package pessoas;

public class Monitor extends Aluno{
	
	private String disciplina;
	private int cargaHoraria;

	public Monitor(String nome, String matricula) {
		super(nome, matricula);
	}

	public String getDisciplina() {
		return disciplina;
	}

	public int getCargaHoraria() {
		return cargaHoraria;
	}

	public void setDisciplina(String disciplina) {
		this.disciplina = disciplina;
	}

	public void setCargaHoraria(int cargaHoraria) {
		this.cargaHoraria = cargaHoraria;
	}
	
	@Override
	public void imprimeObjeto() {
		super.imprimeObjeto();
		System.out.println(this.getNome() + " e um Monitor");
		System.out.println("Disciplina: " + getDisciplina());
		System.out.println("Carga Horaria: " + getCargaHoraria());

	}
	
	
	

}
