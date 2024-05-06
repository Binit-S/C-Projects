#include <stdio.h>
#include <math.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum, remainder, result = 0;
    originalNum=num;
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, 3);
        num /= 10;
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
