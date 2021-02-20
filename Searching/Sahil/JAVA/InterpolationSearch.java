package searching;

public class InterpolationSearch {

    public static int interpolationSearch(int[] arr, int numberToSearch) {

        int size = arr.length;
        int low = 0, heigh = size - 1 ;
        while(low <= heigh && arr[low] <= numberToSearch && arr[heigh] >= numberToSearch) {

            if (low == heigh) {

                if (arr[low] == numberToSearch) {
                    return low ;
                } else {
                    return -1 ;
                }
            }
            // finding the position most suitable for the value to be present in
            int pos = (int) (low + (((double)(heigh - low) /(arr[heigh] - arr[low])) * (numberToSearch - arr[low])));

            // compares the value at pos with the number to search and change the high and low mark
            if(arr[pos] == numberToSearch) {
                return pos ;
            } else if(arr[pos] <  numberToSearch) {
                low = pos + 1 ;
            } else {
                heigh = pos - 1 ;
            }
        }

        return -1 ;
    }

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 } ;
        int numberToSearch = 20 ;
        int searchResult = interpolationSearch(arr, numberToSearch) ;

        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
