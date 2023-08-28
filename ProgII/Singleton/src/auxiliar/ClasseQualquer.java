package auxiliar;

public class ClasseQualquer {
	
	public static ClasseQualquer instace;
	
	private ClasseQualquer() {
		
	}
	
	public static ClasseQualquer GetInstance() {
		if (instace == null)
			instace = new ClasseQualquer();
		return instace;
	}

}
