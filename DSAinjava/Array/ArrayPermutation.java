import java.util.List;
import java.util.ArrayList;

public class ArrayPermutation {
    private void recurPermute(int[] nums, List<Integer> ds, List<List<Integer>> ans, boolean[] feq) {
        if (ds.size() == nums.length) {
            ans.add(new ArrayList<>(ds));
            return;
        }
        for (int i = 0; i < nums.length; i++) {
            if (!feq[i]) {
                feq[i] = true;
                ds.add(nums[i]);
                recurPermute(nums, ds, ans, feq);
                ds.remove(ds.size() - 1);
                feq[i] = false;
            }
        }

    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> ds = new ArrayList<>();
        boolean freq[] = new boolean[nums.length];
        recurPermute(nums, ds, ans, freq);
        return ans;
    }

    public static void main(String[] args) {
        ArrayPermutation ap = new ArrayPermutation();
        int arr[] = { 1, 2, 3 };
        System.out.println(ap.permute(arr));
        /*
         * this approch take n!*n times complexity
         * 
         * and space complexity is O(n)+O(n);
         * 
         */
    }
}
