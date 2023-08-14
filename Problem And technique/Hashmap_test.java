import java.util.*;
public class Hashmap_test {
    HashMap<Integer,String> map=new HashMap<Integer,String>();
    map.put(1,"Mango");  //Put elements in Map  
    map.put(2,"Apple");    
    map.put(3,"Banana");   
    map.put(4,"Grapes");   
    System.out.println("Iterating Hashmap...");  
   for(Map.Entry m : map.entrySet()){    
    System.out.println(m.getKey()+" "+m.getValue());    
   }  


    
}
