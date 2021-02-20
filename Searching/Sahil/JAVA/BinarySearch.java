package searching;

public class BinarySearch {

    public static int binarySearch(int[] arr, int numberToSearch) {

        int position = -1 ;
        int low = 0, high = arr.length - 1 ;
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

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 } ;
        int numberToSearch = 100 ;
        int searchResult = binarySearch(arr, numberToSearch) ;

        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
