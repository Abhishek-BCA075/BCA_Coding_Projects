#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from n to 1
    while(n >= 1) {
        printf("%d ", n);
        n--;
    }

    return 0;
}