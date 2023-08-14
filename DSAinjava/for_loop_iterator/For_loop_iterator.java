
import java.util.*;
import java.util.HashMap;

public class For_loop_iterator {
    public static void main(String args[]) {
        // int arr[]={23,35,23,67,97,45,34,57};
        // String str[]={"India","pak","US","China"};
        // //Syntex of for loop iterator
        // //for(datatype name:collection)
        // for(int val:arr){
        // System.out.println(val);
        // }

        // for(String val:str){
        // System.out.println(val);
        // }
        HashMap<String, Integer> map = new HashMap<>();
        // map.put(key,value) that function is insert the value in map
        map.put("India", 120);
        map.put("US", 30);
        map.put("China", 140);
        for (Map.Entry<String, Integer> e : map.entrySet()) {
            System.out.println(e.getKey());
            System.out.println(e.getValue());
        }

    }
}
