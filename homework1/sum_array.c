/*   
 *  sum_array.c - function to sum the elements of an integer array
 *  Luke Broussard (brouslr0@sewanee.edu)
 *  HW1 #2, 9/17/2020
 */


/*   Write a definition for a function with the following function prototype:
   int array_sum(int a[], int n);
where a is an array of integers and n is the array's length. 
The function will return the result of summing up all elements in the array.*/

# include <stdio.h>


int array_sum(int a[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }


    return sum;
}
