public class Mergesorting {

    public void mergesort(int arr[], int l, int r) {
        System.out.println("devide l=" + l + " r=" + r);

        if (l >= r)
            return;
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }

    public void merge(int arr[], int l, int m, int r) {
        System.out.println("merge" + l + " " + m + " " + r);
        return;
        // int temp_arr[] = new int[r - l + 1];
        // int i = l;
        // int j = m + 1;
        // int k = 0;
        // while ((i <= m) || j <= r) {
        // if (arr[i] > arr[j])
        // temp_arr[k++] = arr[i++];
        // if (arr[i] < arr[j])
        // temp_arr[k++] = arr[j++];

        // else
        // temp_arr[k++] = arr[i++];
        // temp_arr[k++] = arr[j++];

        // }
        // while (i <= m)
        // temp_arr[k++] = arr[i++];
        // while (j <= r)
        // temp_arr[k++] = arr[j++];
        // for (int t = l; t <= r; t++) {

        // }

    }

    public static void main(String[] args) {
        int arr[] = { 2, 7, 5, 7, 9, 1 };
        Mergesorting obj = new Mergesorting();
        obj.mergesort(arr, 0, arr.length - 1);

    }

}
