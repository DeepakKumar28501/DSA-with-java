import java.util.*;
// & logical AND
// | logical OR
// ^ binary XOR
// ~ Binary one's Complement
// << Binary left Shift
// >> Binary right Shift

// using the bit manipulatioon we can reduce algorithms time complexities
// some bit method are get set 
/*
public class Bitpmanipulation {
    public static void main(String args[]) {
        int n = 5; // 0101
        // now we want to check second bit(position 2) bit zero or one
        // first of all we shift 2 bit left like 5=0101 then
        // 0101<<2=0100
        // and then perform Binary And operation of 0100 and 0101 then out put is=0100
        // it is called bit masking 0100 is a bit masking we want to
        // check second position bit and now see the bit masking only seond postion bit
        // is one
        // and rest is zero t
        /*
         * 0101
         * &0100
         * ans:0100 now if answer is all zero then second bit is zero otherwise bit is 1
         
        int leftop = 10 << 2;// trick 10* 2power of 2 ans =10*4=40
        // int leftop = 10 << 3; trick 10* 3power of 2 ans =80
        System.out.println("left shift operation: " + leftop);
        // right shift
        
         * 10>>2 ans =2
         * 10>>3=ans =1
         
        System.out.println("right shift operation: " + ( 10 >> 3));

    }
}

*/
class Bitpmanipulation {
    public static void main(String args[]) {
        // get second bit 0 or 1 or check
        int n = 5;// 0101
        int pos = 3;
        int bitmask = 1 << 2; // make bit mask like shift 1 postion time 0100
        // 0100 & 0101=0100
        if ((bitmask & n) == 0)
            System.out.println("Bit Was Zero");
        else
            System.out.println("Bit Was One");

        // set bit operation
        // Use Binary OR (|)
        // set the 2nd bit (position=1) of a number n. (n=0101)
        // bit mask 1<<1
        // Operation OR
        int newbitmask = 1 << 1;
        int newnum = newbitmask | n;
        System.out.println("New Number:" + newnum);

        // clear Bit (make bit zero)
        // bitmask: 1<<i
        // Question: Clear the 3rd bit (Position=2) of a number n. (n=0101)

        int clearbitmask = 1 << 2;
        int newnum2 = ~clearbitmask & n;
        System.out.println("clear  Number:" + newnum2);

    }
}