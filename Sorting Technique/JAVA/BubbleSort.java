package sorting;

public class BubbleSort {

    public static void bubbleSort(int[] arr) {

        for (int i = 0; i < arr.length - 1; i++) {

            for (int j = 0; j < arr.length - i - 1; j++) {

                if(arr[j] > arr[j+1]) {

                    int temp = arr[j] ;
                    arr[j] = arr[j + 1] ;
                    arr[j+1] = temp ;
                }
            }
        }
    }

    public static void main(String[] args) {

        int[] arr = {64, 25, 12, 22, 11};

        System.out.print("The original array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
        System.out.println();

        bubbleSort(arr);

        System.out.print("The sorted array: ");
        for (int i : arr) {
            System.out.printf("%d ,", i);
        }
    }
}
