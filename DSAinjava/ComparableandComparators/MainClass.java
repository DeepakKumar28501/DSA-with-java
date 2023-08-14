package ComparableandComparators;

import java.util.*;
import java.util.Collection;

public record MainClass() {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        students.add(new Student(23, "Ram"));
        students.add(new Student(24, "Shyam"));
        students.add(new Student(26, "Richesh"));
        students.add(new Student(63, "Akash"));
        students.add(new Student(93, "Vikas"));
        students.add(new Student(33, "harsh"));
        // System.out.println(students);
        Collections.sort(students);
        students.forEach(System.out::println);
    }
}
// colllectios.sort(object) is used to sort the array of object;

/// now working of Comaparator it is also have a Interface

class SortByNameMarks implements Comparator<Student> {
    @Override
    public int compare(Student o1, Student o2) {
        if (o1.name.equals(o2.name))
            return o1.marks - o2.marks;
        else {
            return o1.name.compareTo(o2.name);
        }

    }
}
