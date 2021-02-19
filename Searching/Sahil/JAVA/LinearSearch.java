public class LinearSearch {

    public static int linearSearch(int[] arr, int numberToSearch) {

        int position = -1 ;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == numberToSearch) {
                position = i ;
            }
        }
        return position ;
    }

    public static void main(String[] args) {

        int[] arr = {10, 20, 80, 30, 60, 50,  110, 100, 130, 170} ;
        int numberToSearch = 110 ;
        int searchResult = linearSearch(arr, numberToSearch) ;
        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
