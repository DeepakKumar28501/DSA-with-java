/*revrse word in given String 
Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

*/
import java.util.*;
public class ReverseWord {

    public String revString(String str){
        String arr[]=str.split(".");
                    System.out.println("Hello");

        for(String s:arr){
            System.out.println(s);
        }

        return null;

    }
    public static void main(String[] args) {
        ReverseWord rev=new ReverseWord();
        rev.revString("i.like.this.program.very.much");
    }

    
}
