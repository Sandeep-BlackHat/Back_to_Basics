package searching;

public class JumpSearch {

    public static int jumpSearch(int[] arr, int numberToSearch) {

        int size = arr.length;
        int step = (int) Math.sqrt(size) ;
        int previous_step = 0 ;

        while (step < size && arr[step] < numberToSearch) {

            // searching for the suitable block
            previous_step = step;
            step += Math.sqrt(size) ;
        }
        while (arr[previous_step] < numberToSearch) {

            // linear search in that block till that element is reached
            previous_step += 1 ;
            if(previous_step == size) {
                return -1 ;
            }
        }
        // checking if that element is the element we require
        if(arr[previous_step] == numberToSearch) {

            return previous_step ;
        }

        return -1 ;
    }

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 } ;
        int numberToSearch = 190 ;
        int searchResult = jumpSearch(arr, numberToSearch) ;

        if(searchResult >= 0) {
            System.out.println("Number found at: " + (searchResult + 1));
        } else {
            System.out.println("Number not found");
        }
    }
}
