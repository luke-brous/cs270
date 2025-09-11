/* An example C program using an array. */
#include <stdio.h>

int main() {
    int i, size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // declare array of 10 ints
    int my_arr[size];

    // set the value of each array element
    for (i = 0; i < size; i++) {
        my_arr[i] = i*i;
    }

    // set value at index 3 to 100
    

    // print the number of array elements
    printf("array of %d items:\n", size);

    // print each element of the array
    for(i = 0; i < size; i++) {
        printf("%d\n", my_arr[i]);
    }

    return 0;
}