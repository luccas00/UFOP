package ultimo;

import java.util.Scanner;

public class Ex_3 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		final int tam;
		System.out.println("Digite quantos alunos tem sua turma");
		tam = sc.nextInt();
		
		String nome;
		double nota[] = new double[3];
		
		Alunos_Ex_3 turma[] = new Alunos_Ex_3[tam];
		for (int i = 0; i < turma.length; i++) {
			System.out.println("Digite o nome do aluno");
			nome = sc.next();
			turma[i] = new Alunos_Ex_3(nome);
			System.out.println("Digite a turma");
			turma[i].setTurma(sc.nextInt());
			
			System.out.println("Digite as 3 notas");
			nota[0] = sc.nextDouble();
			nota[1] = sc.nextDouble();
			nota[2] = sc.nextDouble();
			
			turma[i].setNotas(nota[0], nota[1], nota[2]);
			
		}
		
		for (int i = 0; i < turma.length; i++) {
			turma[i].imprimeDados();
		}
	
	}

}
