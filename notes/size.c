#include <stdio.h>

int main(){
    printf("The size of int: %zu byte(s)\n", sizeof(int));
    printf("The size of char: %zu byte(s)\n", sizeof(char));
    printf("The size of float: %zu byte(s)\n", sizeof(float));
    printf("The size of double: %zu byte(s)\n", sizeof(double));
    printf("The size of long: %zu byte(s)\n", sizeof(long));
    printf("The size of long long: %zu byte(s)\n", sizeof(long long));
    printf("The size of short: %zu byte(s)\n", sizeof(short));
    printf("The size of void*: %zu byte(s)\n", sizeof(void*));

    return 0;
}
