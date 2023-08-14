package temp;

import java.util.*;

public class test1 {
    public static void main(String[] args) {
        Queue<Integer> que = new PriorityQueue<>();
        Queue<Integer> que2 = new PriorityQueue<>();
        que.add(10);
        que.add(20);
        que.add(30);
        System.out.println(que);
        que.remove();
        que2.add(455);
        System.out.println(que2);
        que2.addAll(que);// copy other que or merge
        System.out.println(que2);
        que.add(567);
        System.out.println(que);
        // que.clear();
        System.out.print(que.size());
        System.out.println("test1.main()");

    }
}
