public class Student{
	String name;
	String surname;
}

@Override
public int hashCode(){
	int hash = 7;
	hash = 67 * hash + Objects.hashCode(this.surname);
	return hash;
}

@Override
public boolean equals(Object obj) {
	if (Obj == null) {
		return false;
	}
	if (getClass() != obj.getClass()) {
		return false;

	}
	final Student other = (Student) obj;
	if (!Objects.equals(this.surname,other.surname)){
		return false;

	}
	return true;
}