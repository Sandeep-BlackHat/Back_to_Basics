/*
 * Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The
 * task is to find that the key x present in every segment of size k in arr[].
 *
 * Example:
 * Input :
    arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3}
    x = 3
    k = 3
    Output : Yes
    There are 4 non-overlapping segments of size k in the array, {3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}. 3 is present all segments.
*/

package com.keima;

import java.util.Arrays;

public class CheckKeyInSegment {

    public static void main(String[] args) {

        int[] arr = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3} ;
        int key = 3, segment = 3;
        double gap = ( (double) arr.length / segment) ;
        int div = ((int)gap != gap) ? (int)gap + 1 : (int)gap ;
        int count = 0 ;
        int startingValue = 0, endingValue = 0;

        for (int i = 0; i < div; i++) {

            startingValue = endingValue ;
            endingValue = endingValue + segment ;
            if(endingValue > arr.length) {
                // exception handling so if any segment is small then we don't get an out of index error
                endingValue = arr.length ;
            }
            int[] segmentOfArray = Arrays.copyOfRange(arr, startingValue, endingValue) ;
            if(isKeyInSegment(segmentOfArray , key)) {
                count += 1 ;
            }
        }
        System.out.println( (count == div) ? "Yes" : "No" );
    }

    public static boolean isKeyInSegment(int[] arrSegment, int key)  {

        return Arrays.stream(arrSegment).anyMatch(n -> n == key);
    }
}
