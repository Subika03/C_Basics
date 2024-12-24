#include <stdio.h>

int main() {
    int number=-9;

    //printf("Enter a number: ");
    //scanf("%d", &number);

    if (number > 0) {
        if (number % 2 == 0) {
            printf("%d is positive and even.\n", number);
        } else {
            printf("%d is positive and odd.\n", number);
        }
    } else {
        printf("%d is not positive.\n", number);
    }

    return 0;
}
