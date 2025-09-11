#include <stdio.h>

int main() {
    int a, b, c;
    printf("\nEnter your social security number using dashes: ");
    scanf("%d-%d-%d", &a, &b, &c);
    printf("\nYour social security number reversed is: %d-%d-%d\n\n", c, b, a);
    return 0;
}