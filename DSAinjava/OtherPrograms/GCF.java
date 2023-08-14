
// import java.lang.Math;
public class GCF {
    //gratest common factor

    // if can we solve by using folowing methods
    /*using for loop
    Using while loop
    using User-Define Method 
    using the Euclidean algorithm
    using modulo operator
    */
    public void Using_for_loop(int a,int b){
        int gcd=1;
        for(int i=1;i<=a && i<=b;i++){
            if(a%i==0 && b%i==0)
                gcd=i;
        }
        System.out.println("Using for Loop="+gcd);

    }

    public void using_while(int a,int b){
        while(a!=b){
            if(a>b)
                a=a-b;
            else    
                b=b-a;
            
        }
        System.out.println("Using while Loop="+b);
    }

    public void gcdmethod3(int a,int b){
        int temp,gcd=0;
        while(b!=0){
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd=a;
        System.out.println("Using method 3="+a);

    }

    public int gcf_modulo(int a,int b){
        if(b==0)
        return a;
        return gcf_modulo(a, a%b);
        
    }
    public static void main(String[] args) {
        GCF obj=new GCF();
        obj.Using_for_loop(30,60);
        obj.using_while(30,60);
        obj.gcdmethod3(30,60);
        System.out.println("Using Modulo Operator="+obj.gcf_modulo(60,90));
    }

}
