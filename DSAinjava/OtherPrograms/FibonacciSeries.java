class FibonacciSeries {
    public void fiboprint(int n){
        //without recursion
        int a=0,b=1;
        System.out.print("0 1 "); 
        for(int i=0;i<n-2;i++){
            System.out.println((a+b)+" ");
            int temp=a;
            a=b;
            
            b=temp+b;
        }

    }

    // with recursion
    public int fiprint(int n){
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return fiprint(n-2)+fiprint(n-1);

    }
    public static void main(String[] args) {
        FibonacciSeries obj=new FibonacciSeries();
        obj.fiboprint(10);
        for(int i=0;i<10;i++){
            System.out.println(obj.fiprint(i)+" ");
        }
        
    }
}