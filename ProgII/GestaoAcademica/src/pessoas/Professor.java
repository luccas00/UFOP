package pessoas;

import componentes.ComponentesPessoas;

public class Professor extends Pessoas{
	
	public Professor(String nome, String departamento) {
		super(nome);
		setDepartamento(departamento);
		setMatricula();
		Professor.ContadorDeProfessor++;
	}

	private static int MaximoDeProfessores = 10;
	private static int ContadorDeProfessor = 0;
	
	private String matricula;
	private String departamento;

	public static int getMaximoDeProfessores() {
		return MaximoDeProfessores;
	}

	public static int GetContadorDeProfessor() {
		return ContadorDeProfessor;
	}
	
	public String getMatricula() {
		return matricula;
	}
	
	private void setMatricula() {
		this.matricula = ComponentesPessoas.getMatriculaProfessor(6);
	}
	
	public String getDepartamento() {
		return departamento;
	}
	
	private void setDepartamento(String departamento) {
		this.departamento = departamento;
	}
	
	@Override
	public void imprimeObjeto() {
		System.out.println("- Professor -");
		super.imprimeObjeto();
		System.out.println("Matricula: " + getMatricula());
		System.out.println("Departamento: " + getDepartamento());
	}


}
