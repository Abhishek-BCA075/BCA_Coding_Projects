// Program to find sum of all odd numbers from 1 to n using while loop

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;
        i += 2;   // next odd number
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}