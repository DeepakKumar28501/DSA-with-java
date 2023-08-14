public class Sumofminnumber {
    public int sumofdigit(int arr[]) {
        int sum = 0;
        for (int num : arr) {
            sum += mindig(num);
        }
        return sum;

    }

    public int mindig(int num) {
        int min = Integer.MAX_VALUE;
        while (num > 0) {
            int temp = num % 10;
            if (temp < min)
                min = temp;
            num /= 10;
        }
        return min;
    }

    public static void main(String[] args) {

        int arr[] = { 234, 65, 78, 89, 321 };
        Sumofminnumber ob = new Sumofminnumber();

        System.out.println(ob.sumofdigit(arr));

    }

}
