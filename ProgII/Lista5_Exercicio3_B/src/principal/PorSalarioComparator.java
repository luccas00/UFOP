package principal;

import java.util.Comparator;

public class PorSalarioComparator implements Comparator<Empregado> {
	
	@Override
	public int compare(Empregado o1, Empregado o2) {
		if (o1.getSalario() < o2.getSalario()) {
			return -1;
		}
		if (o1.getSalario() > o2.getSalario()) {
			return 1;
		}
		return 0;
	}
	
};
