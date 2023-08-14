class Selection_sort {
    static int a[] = {30, 35, 56, 23, 12, 56, 87, 34, 56, 76 };
    static int n = a.length;

    public static void sort() {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    public static void display() {
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + "  ");
        }
    }

    public static void main(String args[]) {
        sort();
        display();
    }
}