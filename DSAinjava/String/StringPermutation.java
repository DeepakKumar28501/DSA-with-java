import java.util.*;

public class StringPermutation {

    public void permutation(String s, int l, int r) {
        if (l == r) {
            System.out.println(s);
            return;
        }
        for (int i = l; i <= r; i++) {
            s = swap(s, l, r);

        }
    }

    public String swap(String s, int l, int r) {
        char temp = s.charAt(l);
        // s.setCharAt(4) = s.charAt(3);
        StringBuilder str = new StringBuilder(s);
        str.setCharAt(l, s.charAt(r));
        str.setCharAt(r, temp);
        System.out.println(str.getClass());
        return str.toString();

    }

    public static void main(String[] args) {
        StringPermutation st = new StringPermutation();
        String str = "abc";
        st.permutation(str, 0, 2);

    }
}
