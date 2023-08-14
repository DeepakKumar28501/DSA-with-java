public class Window_sliding {
   public int min_sum(int a[],int k){
        int min_sum=Integer.MAX_VALUE;
        int n=a.length;
        if(n==k){
            System.out.println("There no subarray is possible!");
            return 1;
        }
        for(int i=0;i<n-k;i++){
            int temp_sum=0;
            for(int j=0;j<k;j++){
                temp_sum+=a[i+j];
            } 
            min_sum=min_sum>temp_sum?temp_sum:min_sum;
        }
        return min_sum;
   }
    public int max_sum(int a[],int k)
    {
        int max_sum=Integer.MAX_VALUE;
        int n=a.length;
        for(int i=0;i<n-k;i++){}

        return 1;
    }

}