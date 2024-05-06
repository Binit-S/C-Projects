#include <stdio.h>

void printFibonacci(int n) {
    int first , second , next;
    printf("First and second");
    scanf("%d%d",&first,&second);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&n);

    printFibonacci(n);

    return 0;
}


