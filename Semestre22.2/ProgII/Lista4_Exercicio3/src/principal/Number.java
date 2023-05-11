package principal;

import java.util.Objects;

public class Number {

	private int value;
	
	public Number(int value)
	{
		setValue(value);
	}
	
	public int getValue() {
		return this.value;
	}

	private void setValue(int value) {
		this.value = value;
	}

	@Override
	public String toString() {
		return "Number Value = [" + value + "]";
	}

	@Override
	public int hashCode() {
		return Objects.hash(value);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Number other = (Number) obj;
		return value == other.value;
	}
	
	

}
