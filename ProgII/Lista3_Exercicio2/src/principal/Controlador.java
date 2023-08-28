package principal;

public class Controlador {
	
	public static void main(String[] args)
	{
		
		Cliente c1 = new Cliente("Jose", 47, "Masculino");
		Vendedor v1 = new Vendedor("Carlos", 27, "A450", 1000);
		Gerente g1 = new Gerente("Fabricio", 38, "A002", "Gerencia Sul");
		
		c1.setAnoNascimento(1975);
		c1.setValorDivida(532.40);
		
		v1.setSalario(2321.37);
		v1.setQtdVendas(3);
		
		g1.setSalario(3204);
		
		System.out.println(c1.toString());
		System.out.println(v1.toString());
		System.out.println(g1.toString());
		
	}
}
