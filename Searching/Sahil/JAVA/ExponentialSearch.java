package searching;

public class ExponentialSearch {

    public static int binarySearch(int[] arr, int low, int high, int numberToSearch) {

        int position = -1 ;
        while (low <= high) {

            int mid = (high + low) / 2 ;

            if(arr[mid] < numberToSearch) {
                low = mid + 1 ;
            } else if(arr[mid] > numberToSearch) {
                high = mid - 1 ;
            } else {
                position = mid ;
                break ;
            }
        }
        return position ;
    }

    public static int exponentialSearch(int[] arr, int numberToSearch) {

        if(arr[0] == numberToSearch) return 0 ;

        int i = 1 ;
        while(i < arr.length && arr[i] <= numberToSearch) {
            i *= 2 ;
        }
        return binarySearch(arr, i/2, Math.min(arr.length, i), numberToSearch) ;
    }

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 } ;
        int numberToSearch = 10 ;
        int searchResult = exponentialSearch(arr, numberToSearch) ;

        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
