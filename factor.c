#include <stdio.h>

// Function to find and print the factors of a number with 'x' in between
void findFactors(int num) {
    printf("Factors of %d: ", num);

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d", i);

            // Print 'x' if i is not the last factor
            if (i != num) {
                printf(" x ");
            }
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    findFactors(num);

    return 0;
}

