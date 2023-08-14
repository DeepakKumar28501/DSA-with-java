import java.util.*;

public class Coin_Change {

    public static void main(String[] args) {
        int amount = 18;
        int coin[] = { 7, 5, 1 };
        int dp[] = new int[amount + 1];
        Arrays.fill(dp, -1);
        dp[0] = 0;
        System.out.println(coinChange(coin, amount, dp));
        for (int a_dp : dp) {
            System.out.print(a_dp + " ");
        }
    }

    public static int coinChange(int[] coins, int amount, int dp[]) {
        // we use recursion with for loop
        if (amount == 0)
            return 0;
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < coins.length; i++) {
            if (amount - coins[i] >= 0) {
                int subAns = 0;
                if (dp[amount - coins[i]] != -1) {
                    subAns = dp[amount - coins[i]];
                } else {
                    subAns = coinChange(coins, amount - coins[i], dp);// subanswer
                }

                if (subAns != Integer.MAX_VALUE && subAns + 1 < ans) {
                    ans = subAns + 1;
                }
            }

            // fill dp
            dp[amount] = ans;
        }
        return ans;

    }

}

/*
 * without dp using recursion
 * 
 * public int coinChange(int[] coins, int amount) {
 * //we use recursion with for loop
 * if(amount == 0) return 0;
 * int ans=Integer.MAX_VALUE;
 * for(int i=0;i<coins.length;i++){
 * if(amount-coins[i]>=0){
 * int subAns=coinChange(coins,amount-coins[i]);//subanswer
 * if(subAns !=Integer.MAX_VALUE && subAns+1<ans){
 * ans=subAns+1;
 * }
 * }
 * 
 * 
 * }
 * 
 * return ans;
 * 
 * 
 * }
 * 
 */