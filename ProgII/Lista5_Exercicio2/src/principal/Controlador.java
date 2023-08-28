package principal;

import java.util.*;

public class Controlador {
	
	public static void main(String[] args) {

		Map<String, Funcionario> funcionarios = new HashMap<String, Funcionario>();
		
		Funcionario f1 = new Funcionario("Steve Jobs", 1000, "CEO");
		Funcionario f2 = new Funcionario("Scott McNealy", 2000, "CFO");
		Funcionario f3 = new Funcionario("Jeff Bezos", 1000, "CEO");
		Funcionario f4 = new Funcionario("Larry Ellison", 2000, "CEO");
		Funcionario f5 = new Funcionario("Bill Gates", 9999, "CEO");
		
		funcionarios.put("a1234", f1);
		funcionarios.put("a1235", f2);
		funcionarios.put("a1236", f3);
		funcionarios.put("a1237", f4);
		funcionarios.put("a1238", f5);
		
		Set<String> keys = funcionarios.keySet();
		
		for (String s : keys) {
			System.out.println("- - - - -");
			System.out.println(funcionarios.get(s) + "\nChave: " + s);
			System.out.println();
		}
		
		System.out.println("Procurando pela chave A1234");
		System.out.println(funcionarios.get(keyStandart("A1234")));

	}
	
	public static String keyStandart(String key) {
		return key.toLowerCase();
	}

}
