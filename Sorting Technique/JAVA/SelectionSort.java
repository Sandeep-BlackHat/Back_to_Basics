package sorting;

public class SelectionSort {

    public static void selectionSort(int[] arr) {

        for (int i = 0; i < arr.length; i++) {

            int leastValue = i ;
            for (int j = i +1; j < arr.length; j++) {
                if(arr[j] < arr[leastValue]) {
                    leastValue = j ;
                }
            }
            int temp = arr[i];
            arr[i] = arr[leastValue];
            arr[leastValue] = temp ;

        }
    }

    public static void main(String[] args) {

        int[] arr = {64, 25, 12, 22, 11};

        System.out.print("The original array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
        System.out.println();

        selectionSort(arr);

        System.out.print("The sorted array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
    }
}
