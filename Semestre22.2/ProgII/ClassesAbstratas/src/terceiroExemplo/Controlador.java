package terceiroExemplo;

import java.util.ArrayList;

public class Controlador {

	public static void main(String[] args) {
		
		Conta c1 = new ContaPoupanca(1000);
		Conta c2 = new ContaPoupanca(2000);
		Conta c3 = new ContaPoupanca(50000, 0.03);
		
		Conta c4 = new ContaCorrente(10000);
		Conta c5 = new ContaCorrente(100000, 0.03);
		Conta c6 = new ContaCorrente(1000000, 0.01, 5000);
		
		ArrayList<Conta> contas = new ArrayList<>();
		
		contas.add(c1);
		contas.add(c2);
		contas.add(c3);
		contas.add(c4);
		contas.add(c5);
		contas.add(c6);
		
		for (Conta c : contas) {
			System.out.println(c.toString());
		}
		
		System.out.println("Contas Criadas: " + Conta.qtdContas());
		
		contas.get(0).realizarDeposito(500);
		contas.get(1).realizarSaque(325.50);
		contas.get(2).operacaoDebito(22.30);
		contas.get(3).operacaoDebito(122.98);
		contas.get(4).realizarDeposito(200);
		contas.get(5).operacaoDebito(300);
		
	}
}
