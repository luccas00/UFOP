package principal;

public class Teste {

	public static void main(String[] args) {
		
		Oficina o1 = new Oficina();
		
		Veiculo aux;
		
		Veiculo v1 = new Automovel("Onix");
		Veiculo v2 = new Automovel("Fusca");
		Veiculo v3 = new Bicicleta("Bike de Ferro");
		
		o1.veiculos.add(v1);
		o1.veiculos.add(v2);
		o1.veiculos.add(v3);
		
		for (Veiculo v : o1.veiculos) {
			aux = o1.proximo();
			o1.Manutencao(aux);
			System.out.println(aux.toString());
		}
	}
}
