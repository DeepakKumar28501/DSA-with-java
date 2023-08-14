
import java.util.*;
import java.util.HashMap;

// import java.util.Scanner;
// java hash is store the pair of value as (key ,Value)
// in hashmap key always Unique Value
public class Hashmap_cls {
    public static void main(String args[]) {

        HashMap<String, Integer> map = new HashMap<>();
        // map.put(key,value) that function is insert the value in map
        map.put("India", 120);
        map.put("US", 30);
        map.put("China", 140);
        // System.out.print(map);
        // if I print direct map then it print all data in reverse order
        // because hashmap is unorderd technique

        // map.put("China",130);

        /*
         * if key is ready available in map then it update the value
         * // otherwise it insert the pair key and value
         */

        // System.out.print(map);
        // Search
        /*
         * search or lookup operation
         * if check they key is exist or not
         * use fuction .conatainsKey(object key) or for value .containsValue(object
         * value
         * both key and value function return boolean
         */
        /*
         * if(map.containsKey("India"))
         * System.out.println("Present");
         * else
         * System.out.println(" Not Present");
         */

        // get value in map using .get(key) function
        /*
         * System.out.println(map.get("India"));//return value
         * System.out.println(map.get("pak"));// if key is not present then return null
         * 
         */

        // **********Iteration in HashMap **************/
        // it is a speacial typr of loop
        // collection mean bunch of object or data syntex below
        // for(datatype name :Collection)
        // map.Entry<integer,integer>e:Map.entrySet()
        // make the map data set

        /*
         * for (Map.Entry<String, Integer> e : map.entrySet()) {
         * // e is the datamember of type and Map.Entry<String,Integer> is data type of
         * // that set type
         * // here e conatin a piar (key,value)
         * System.out.println(e.getKey());
         * System.out.println(e.getValue());
         * }
         */

        // ***** make keyset of all map keys*** */
        // second method of accseesing data of Hashmap
        /*
         * Set<String> keys = map.keySet();
         * for (String key : keys) {
         * System.out.println(key + " " + map.get(key));
         * }
         */
        // remove nay data of Hashmap
        // map.remove("India");
        // System.out.println(map);

        // iteration
        for (Map.Entry<String, Integer> e : map.entrySet()) {
            System.out.println(e.getKey() + " " + e.getValue());
        }

        // creatw as set of keys Using set
        Set<String> keys = map.keySet();
        for (String key : keys) {
            System.out.println(key + " " + map.get(key));
        }

    }
}
