/*   
 *  test_sum_array.c - function to sum the elements of an integer array and display the average using user input
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


int main(void) {

    int arr[10];
    for (int i = 0; i < 10; i++) {
        
        printf("\nEnter number  %d:\n", i+1);
        // Input validation inspiration taken from https://stackoverflow.com/questions/23189059/how-to-check-if-the-user-input-an-integer-using-scanf
        if (scanf("%d", &arr[i]) != 1) {
            printf("\n  Invalid input! Please enter an integer.\n");
            i--; // go back in the for loop to give the user another chance to enter a valid integer
            while(getchar() != '\n'); // clearing input buffer
        }
    }

    int sum = array_sum(arr, 10);
    printf("\nThe sum of the entered integers is: %d\n", sum);
    printf("\nThe average  of the entered integers is: %.2f \n", (float)sum / 10);

    return 0;
}