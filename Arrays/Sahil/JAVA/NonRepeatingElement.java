/*
* Find the first non-repeating element in a given array of integers.

    Examples:

        Input : -1 2 -1 3 2
        Output : 3
        Explanation : The first number that does not
        repeat is : 3

        Input : 9 4 9 6 7 4
        Output : 6
* */

public class NonRepeatingElement {

    public static void main(String[] args) {

        int[] arr = {9, 4, 9, 6, 7, 4} ;

        for (int i = 0; i < arr.length; i++) {

            int j ;
            for (j = 0; j < arr.length; j++) {

                if( (i != j) && (arr[i] == arr[j])) {

                    break ;
                }
            }
            if(j == arr.length) {
                System.out.println(arr[i]);
                break;
            }
        }
    }
}
