public class Stringrecursion {

    public boolean ispalindome(String str, int l, int r) {
        if (l >= r)
            return true;
        if (str.charAt(l) != str.charAt(r))
            return false;
        return ispalindome(str, l + 1, r - 1);

    }

    public boolean ispalindome2(String str) {
        int l = 0;
        int r = str.length() - 1;
        while (l < r) {
            if (str.charAt(l++) != str.charAt(r--))
                return false;
        }
        if (str.charAt(l) == str.charAt(r))
            // if (str.charAt(l) == str.charAt(r) && l!=r) when aba is not allow palindome
            return true;
        return false;

    }

    public static void main(String[] args) {
        String s = "abba";
        Stringrecursion obj = new Stringrecursion();
        // System.out.println(obj.ispalindome(s, 0, s.length() - 1));
        System.out.println(obj.ispalindome2(s));
        // System.err.println(obj.ispalindome2(s));
    }
}
