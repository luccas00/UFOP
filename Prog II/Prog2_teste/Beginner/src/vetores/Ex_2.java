package vetores;

public class Ex_2 {

	public static void main(String[] args) {
		
		int vetor[] = new int[50];

		for (int i = 0; i < vetor.length; i++) {
			vetor[i] = 200+(i+1);
		}
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.println(vetor[i]);
		}
		
	}
	
}
