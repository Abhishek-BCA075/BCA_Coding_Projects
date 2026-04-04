// Program to find first and last digit of a number using while loop

#include <stdio.h>

int main() {
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;   // last digit

    while(n >= 10) {
        n = n / 10;
    }
    first = n;       // first digit

    printf("First digit = %d\n", first);
    printf("Last digit = %d", last);

    return 0;
}