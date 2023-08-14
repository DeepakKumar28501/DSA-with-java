class kadane_algo {
    public static void main(String[] args) {
        int arr[] = { -2, 1, -3, 4, -1, 10, 1, -5, 4 };
        int n = arr.length;
        int sum = 0;
        int max_fo_for = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (max_fo_for < sum)
                max_fo_for = sum;
            if (sum < 0)
                sum = 0;
        }

        System.out.println("max sum in the array=" + max_fo_for);

    }

}

/*
 * 
 * this algo takes O(n) time to find max sum of subarray
 * 
 */