package principal;

public class Controlador {

	public static void main(String[] args)
	{
		
		CartaoWeb[] array = new CartaoWeb[3];
		
		Natal n1 = new Natal("Luccas");
		Aniversario a1 = new Aniversario("Gandalf");
		DiaDosNamorados d1 = new DiaDosNamorados("Ana");
		
		array[0] = n1;
		array[1] = a1;
		array[2] = d1;
		
		for (int i = 0; i < array.length; i++) {
			System.out.println();
			array[i].showMessage();
		}
		
	}
	
}
