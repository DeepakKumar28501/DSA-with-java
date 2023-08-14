package OtherPrograms;

import java.util.HashMap;
import java.util.ArrayList;

public class ModularArithmaticalgo {
    HashMap<Character, Integer> AlphaCode = new HashMap<>();

    public ModularArithmaticalgo() {
        for (int i = 0; i < 26; i++) {
            AlphaCode.put((char) (65 + i), i);
            AlphaCode.put((char) (97 + i), i);
        }
    }

    public String encryption(String text, int key) {
        char charr[] = text.toCharArray();
        StringBuilder ciphertext = new StringBuilder();
        for (char ch : charr) {
            int c = (AlphaCode.get(ch) + key) % 26;
            // System.out.println(c);
            ciphertext.append(String.valueOf((char) (65 + c)));
        }

        return ciphertext.toString();
        // System.out.println(ciphertext);
    }

    public String decryption(String ciphertext, int key) {
        StringBuilder plaintext = new StringBuilder();
        char cipher_arr[] = ciphertext.toCharArray();

        for (char ch : cipher_arr) {
            int q = ch - 65;// ch-'A'
            int dcode = q - key;
            // System.out.println(dcode);
            if (dcode < 0) {
                int charcode = 26 + dcode;
                plaintext.append(String.valueOf((char) (65 + charcode)));

            } else {
                int charcode = dcode % 26;
                plaintext.append(String.valueOf((char) (65 + charcode)));
            }
        }
        return plaintext.toString();
    }

    public static void main(String[] args) {
        ModularArithmaticalgo obj1 = new ModularArithmaticalgo();
        // System.out.println(obj1.AlphaCode);
        // System.out.println("Deepak");
        // String plaintext = "HELLO";
        // int key = 15;
        // System.out.println("Encrypt text: " + obj1.encrption(plaintext, key));
        // String decryptext = obj1.decryption(obj1.encrption(plaintext, key), key);
        // System.out.println("Decrypt text: " + decryptext);
        for (int i = 0; i < 26; i++) {
            String decryptext = obj1.decryption("GCUAVQDTGCM", i);
            System.out.println("Decrypt text: " + decryptext + " key=" + i);
        }

    }
}
