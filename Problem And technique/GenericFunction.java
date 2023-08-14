import java.util.*;
public class GenericFunction {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter The value of n");
        int n=sc.nextInt();
        if(n%2==0){
            System.out.println(" Weired");
        }else{
            if(n>=2&&n<=5)
                System.out.println("Not Weired");
            else if(n>=6&&n<=20)
                System.out.println(" Weired");
            else
                System.out.println("Not Weired");
        }

    }
}
