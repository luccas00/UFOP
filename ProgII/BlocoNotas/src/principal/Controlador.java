package principal;

import java.io.FileOutputStream;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;

public class Controlador {
	
	public static void main(String[] args) {
		
		try {
			OutputStream path = new FileOutputStream("C:\\Users\\Luccas\\Desktop\\Folha.txt");
			Writer wr = new OutputStreamWriter(path);
			
			wr.write("Teste\nSucesso");
			
			wr.close();
			
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
}
