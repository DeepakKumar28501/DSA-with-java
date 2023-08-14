package ComparableandComparators;

public class Student implements Comparable<Student> {
    int marks;
    String name;

    public Student(int marks, String name) {
        this.marks = marks;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Student [marks=" + marks + ", " + name + "]";
    }

    public int getMarks() {
        return marks;
    }

    public void setMarks(int marks) {
        this.marks = marks;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public int compareTo(Student obj) {
        if (this.marks > obj.marks)
            return -1;
        if (this.marks < obj.marks)
            return +1;
       \
    }
}
