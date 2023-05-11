package principal;

import java.util.*;

public class Controlador { 
	
	public static void main(String[] args) {
		
		List<Empregado> empresa = new ArrayList<Empregado>();
		PorSalarioComparator salarioComparator = new PorSalarioComparator();
		PorDataComparator dataComparator = new PorDataComparator();
		
		Calendar c = Calendar.getInstance();
		Date dataNova = c.getTime();
		
		Empregado p1 = new Empregado("Luccas", "111", 1000, dataNova);
		
		c.set(2020, 10, 10);
		dataNova = c.getTime();
		Empregado p2 = new Empregado("Joao", "222", 500, dataNova);
		
		c.set(2018, 7, 15);
		dataNova = c.getTime();
		Empregado p3 = new Empregado("Marcos", "333", 100, dataNova);
		
		c.set(2020, 5, 3);
		dataNova = c.getTime();
		Empregado p4 = new Empregado("Antonio", "444", 3000, dataNova);
		
		empresa.add(p1);
		empresa.add(p2);
		empresa.add(p3);
		empresa.add(p4);
		
		System.out.println("- - - - - - - - - -");
		System.out.println("Ordem de Insercao");
		for (Empregado e : empresa) {
			System.out.println(e);
		}
		
		Collections.sort(empresa, salarioComparator);
		System.out.println("\n\n- - - - - - - - - -");
		System.out.println("Ordenando por Salario");
		for (Empregado e : empresa) {
			System.out.println(e);
		}
		
		Collections.sort(empresa);
		System.out.println("\n\n- - - - - - - - - -");
		System.out.println("Ordenando por Nome (Padrao)"); //Ordem padrao de ordenaçao da classe
		for (Empregado e : empresa) {
			System.out.println(e);
		}
		
		System.out.println("\n-------------\nFuncionario de Maior Salario:");
		System.out.println(Collections.max(empresa, salarioComparator));
		
		System.out.println("\n-------------\nFuncionario de Menor Salario:");
		System.out.println(Collections.min(empresa, salarioComparator));
		
		System.out.println("\n-------------\nFuncionario Mais Experiente:");
		System.out.println(Collections.min(empresa, dataComparator));
		
		System.out.println("\n-------------\nFuncionario Menos Experiente:");
		System.out.println(Collections.max(empresa, dataComparator));
		
	}

}
