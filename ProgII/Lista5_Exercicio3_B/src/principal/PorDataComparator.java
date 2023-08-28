package principal;

import java.util.Comparator;

public class PorDataComparator implements Comparator<Empregado> {

	@Override
	public int compare(Empregado o1, Empregado o2) {
		if (o1.getContratacao().before(o2.getContratacao())) {
			return -1;
		}
		if (o1.getContratacao().after(o2.getContratacao())) {
			return 1;
		}
		return 0;
	}
	
	

}
