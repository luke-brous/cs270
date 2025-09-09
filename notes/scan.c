#include <stdio.h>

int main(void) {
    int num;
    float decimal;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a floating-point number: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("You entered:\n");
    printf("Integer: %d\n", num);
    printf("Floating-point number: %.2f\n", decimal);
    printf("Character: %c\n", character);

    return 0;
}