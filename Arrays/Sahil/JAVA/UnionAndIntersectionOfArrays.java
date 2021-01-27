/*
 * Given two sorted arrays, find their union and intersection.
    Example:

    Input : arr1[] = {1, 3, 4, 5, 7}
            arr2[] = {2, 3, 5, 6}
    Output : Union : {1, 2, 3, 4, 5, 6, 7}
            Intersection : {3, 5}
*/

import java.util.Arrays;
import java.util.HashSet;

public class UnionAndIntersectionOfArrays {

    public static void main(String[] args) {

        int[] arr1 = {1, 3, 4, 5, 7} ;
        int[] arr2 = {2, 3, 5, 6} ;

        int longestArraySize = Math.max(arr1.length, arr2.length);

        HashSet<Integer> union = new HashSet<>() ;

        Arrays.stream(arr1).forEach(union::add);
        Arrays.stream(arr2).forEach(union::add);

        System.out.println(union);

        intersection(arr1, arr2);

    }

    public static void intersection(int[] arr1, int[] arr2) {

        int i , j ;
        i = j = 0 ;
        while(i < arr1.length && j < arr2.length) {

            if(arr1[i] < arr2[j]) {
                i++ ;
            } else if(arr2[j] < arr1[i]) {
                j++ ;
            } else {
                System.out.print(arr1[i] + ", ");
                i++ ; j++ ;
            }
        }
    }
}
