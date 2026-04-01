// Program to find sum of all even numbers from 1 to n using while loop

#include <stdio.h>

int main() {
    int n, i = 2, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;
        i += 2;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}