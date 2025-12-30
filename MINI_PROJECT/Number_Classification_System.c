//ARSH KAMAL 
// 10279 1D

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter an integer to classify: ");
    scanf("%d", &num);

    printf("\n--- Classification Results for %d ---\n", num);
    if (num > 0) {
        printf("* Sign: Positive\n");
    } else if (num < 0) {
        printf("* Sign: Negative\n");
    } else {
        printf("* Sign: Zero\n");
    }
    if (num % 2 == 0) {
        printf("* Parity: Even\n");
    } else {
        printf("* Parity: Odd\n");
    }
    if (num <= 1) {
        isPrime = false; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (num <= 1) {
        printf("* Category: Neither Prime nor Composite\n");
    } else if (isPrime) {
        printf("* Category: Prime Number\n");
    } else {
        printf("* Category: Composite Number\n");
    }

    return 0;
}