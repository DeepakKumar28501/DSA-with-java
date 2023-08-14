public class Coins_change {
    public static int coinChange(int[] coins, int amount) {
        // we use recursion with for loop
        if (amount == 0)
            return 0;
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < coins.length; i++) {
            if (amount - coins[i] >= 0) {
                int subAns = coinChange(coins, amount - coins[i]);// subanswer
                if (subAns != Integer.MAX_VALUE && subAns + 1 < ans) {
                    ans = subAns + 1;
                }
            }

        }
        return ans;

    }

    public static void main(String[] args) {
        int amount = 18;
        int coin[] = { 7, 5, 1 };
        System.out.println(coinChange(coin, amount));
    }

}

// time complexity O(n^m)
