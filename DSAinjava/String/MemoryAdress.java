

import java.util.*;

public class MemoryAdress {
    public static void main(String args[]) {
        String str = "heelo";
        int hashCode = System.identityHashCode(str);
        str += "veely";
        int hashCode2 = System.identityHashCode(str);
        System.out.println("Original String Memory address (approximation): " + hashCode);
        System.out.println("Changed String Memory address (approximation): " + hashCode2);

        int t = 56;
        int intadd = System.identityHashCode(t);
        t += 87;
        int intadd2 = System.identityHashCode(t);
        System.out.println("Original int Memory address (approximation): " + intadd);
        System.out.println("Changed int Memory address (approximation): " + intadd2);

    }

}