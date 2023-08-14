import java.util.ArrayList;
import java.util.List;

public class String_powerset {

    public List<String> AllPossibleStrings(String s) {
        // Code here
        List<String> ans = new ArrayList<>();
        return printset(s, 0, ans);
    }

    public List<String> printset(String s, int i, List<String> ans) {
        if (i == s.length()) {
            return ans;
        }

        printset(s, i + 1, ans.append(s.charAt(i)));
        printset(s, i + 1, ans);
    }

}

/*
 * 
 * class Solution
 * {
 * public List<String> AllPossibleStrings(String s)
 * {
 * // Code here
 * ArrayList<String> a = new ArrayList<>();
 * int n = s.length();
 * for(int num = 0; num < (1<<n);num++)
 * {
 * String sub ="";
 * for(int i=0; i<n;i++)
 * {
 * if((num & (1<<i))!=0)
 * {
 * sub +=s.charAt(i);
 * }
 * }
 * 
 * if(sub.length()>0)
 * {
 * a.add(sub);
 * }
 * }
 * Collections.sort(a);
 * return a;
 * }
 * }
 * 
 */

/* 
 * 
 */