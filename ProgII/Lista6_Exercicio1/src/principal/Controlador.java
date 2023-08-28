package principal;

import secundario.*;

public class Controlador {
	
	public static void main(String[] args) {
		
		MaquinaDeEscrever machine = MaquinaDeEscrever.GetInstance();
		MaquinaDeEscrever nova = MaquinaDeEscrever.GetInstance();
		MaquinaDeEscrever velha = MaquinaDeEscrever.GetInstance();
		
		machine.setCodigo(201);
		machine.setSenha("8015");
		machine.setUsuario("Luccas");
		System.out.println("- - - - -");
		System.out.println("1o HashCode: " + machine.hashCode());
		System.out.println(machine);
		
		nova.setCodigo(222);
		nova.setSenha("0000");
		nova.setUsuario("Joao");
		System.out.println("- - - - -");
		System.out.println("2o HashCode: " + nova.hashCode());
		System.out.println(nova);
		
		System.out.print("\nmachine equals nova ? ");
		System.out.println(machine.equals(nova));
		
		System.out.print("\nnova equals machine ? ");
		System.out.println(nova.equals(machine));
		
		nova.setCodigo(111);
		nova.setSenha("3333");
		nova.setUsuario("Carlos");
		System.out.println("- - - - -");
		System.out.println("3o HashCode: " + nova.hashCode());
		System.out.println(nova);
		
		velha.setCodigo(007);
		velha.setSenha("7777");
		velha.setUsuario("Thiago");
		System.out.println("- - - - -");
		System.out.println("4o HashCode: " + velha.hashCode());
		System.out.println(velha);
		
		System.out.print("\nvelha equals nova ? ");
		System.out.println(velha.equals(nova));
		
		System.out.print("\nvelha equals machine ? ");
		System.out.println(velha.equals(machine));
		
	}
}
