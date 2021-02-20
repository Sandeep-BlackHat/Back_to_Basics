package searching;

public class TernarySearch {

    public static int ternarySearch(int[] arr, int numberToSearch) {

        int position = -1 ;
        int low = 0, high = arr.length - 1 ;
        while (low <= high) {

            int midFirst = low + (high - low) / 3 ;
            int midSecond = midFirst + (high - low) / 3 ;

            if(arr[midFirst] == numberToSearch) {

                position = midFirst ;
                break ;
            } else if(arr[midSecond] == numberToSearch) {

                position = midSecond ;
                break ;
            } else if (arr[midFirst] > numberToSearch) {
                high = midFirst - 1 ;
            } else if(arr[midSecond] < numberToSearch) {
                low = midSecond + 1 ;
            } else {
                low = midFirst + 1 ;
                high = midSecond - 1 ;
            }

        }
        return position ;
    }

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 } ;
        int numberToSearch = 200 ;
        int searchResult = ternarySearch(arr, numberToSearch) ;

        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
