
// it takes O(1) time of all operation perform
// functions in HashMap
/*
put(); =put(key,value)
get();=get(key)
conatainsKey();
containsValue();
remove();=remove(key)
size();=name.size();
keySet();=name.keySet();

*/
/* 
hashing means change the data formate like 
"abc"=3015,"ghd"=859  ....
using hashing algorithms Sh1,.....Sh256
input(data)->hashfunction->output(bucketindex)    always input is same then it return same bucket index
*/

// HashMap implement internaly using Array of liked LIst 
import java.util.*;

public class Imp_HashMap {
    // required variable
    // n(nodes)
    // N(sizeofarray) also called bucket
    static class HashMap<K, V> {// generics also called parameterised types
        private class Node {
            K key;
            V value;

            public Node(K key, V value) {
                this.key = key;
                this.value = value;
            }
        }

        private int n;// number of node(nodes)
        private int N;// Size of array(bucket)
        private LinkedList<Node> buckets[];// N=buckets.length

        @SuppressWarnings("unchacked")

        public HashMap() {
            this.N = 4;
            this.buckets = new LinkedList[4];// intializing linked list
            // now intializing array as a blank list
            for (int i = 0; i < 4; i++) {
                this.buckets[i] = new LinkedList<>();
            }
        }

        private int hashFunction(K key) {
            int bi = key.hashCode();// it return integer value range between 234567 -234568
            // but we need always positive value
            return Math.abs(bi) % N;// we need value 0 to N-1 and Math.abs convert value in positive
        }

        private void rehash() {
            LinkedList<Node> oldBuckets[] = buckets;
            buckets = new LinkedList[N * 2];
            for (int i = 0; i < N * 2; i++) {
                buckets[i] = new LinkedList<Node>();
            }
            // transfer value old node to new node
            for (int i = 0; i < oldBuckets.length; i++) {
                LinkedList<Node> ll = oldBuckets[i];
                for (int j = 0; j < ll.size(); i++) {
                    Node node = ll.get(j);
                    put(node.key, node.value);
                }
            }
        }

        public void put(K key, V value) {
            int bi = hashFunction(key);
            int di = searchInLL(key, bi);// if di=-1
            if (di == -1) {
                buckets[bi].add(new Node(key, value));
                n++;
            } else {
                Node node = buckets[bi].get(di);
                node.value = value;
            }
            double lambda = (double) n / N;
            if (lambda > 2.0) {
                // rehashing
            }

        }

        public boolean containsKey(K key) {
            return false;
        }

        public V remove(K Key) {
            return null;
        }

        private int searchInLL(K key, int bi) {
            LinkedList<Node> ll = buckets[bi];

            for (int i = 0; i < ll.size(); i++) {
                if (ll.get(i).key == key) {
                    return i;// di
                }
            }
            return -1; // di
        }

        public V get(K key) {
            return null;

        }

        public ArrayList<K> keySet() {
            return null;

        }
    }

    public static void main(String args[]) {
        HashMap<String, Integer> newhashmap = new HashMap<>();
        newhashmap.put("India", 123);
        newhashmap.put("Pak", 133);
        newhashmap.put("Us", 143);
        newhashmap.put("China", 153);
        System.out.println(newhashmap);
    }

}
