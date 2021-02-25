package sorting;

public class InsertionSort {

    public static void insertionSort(int[] arr) {

        for (int i = 0; i < arr.length ; i++) {

            int temp = arr[i] ;
            int loc = i - 1 ;
            while(loc >= 0 && arr[loc] > temp) {

                arr[loc + 1] = arr[loc];
                loc -= 1 ;
            }
            arr[loc + 1] = temp ;
        }
    }

    public static void main(String[] args) {

        int[] arr = {22, 34, 12, 3, 55, 9, 10};

        System.out.print("The original array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
        System.out.println();

        insertionSort(arr);

        System.out.print("The sorted array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
    }
}
