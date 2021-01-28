/*
* Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

    Example:

        Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
        Output: 1, 3, 6

        Explanation: The numbers 1 , 3 and 6 appears more
        than once in the array.

        Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
        Output: 3

        Explanation: The number 3 appears more than once
        in the array.
* */

// THIS WILL WORK ONLY IF ALL THE ELEMENTS ARE POSITIVE

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class FirstDuplicate {

    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 6, 3, 6, 1} ;
        Map<Integer, Integer> duplicates = new HashMap<>() ;
        for (int i = 0; i < arr.length; i++) {

            if(duplicates.containsKey(arr[i])) {
                System.out.print(arr[i] + ", ");
            } else {
                duplicates.put(arr[i], 0) ;
            }
        }
    }
}
