#include<stdio.h>

void countDigits(int num){


    // Count digits
    while (num != 0) {
        num /= 10;
        int num_digits = 0 ;
        num_digits++;
    }

}
int main() {
    int num,num_digits ;
    printf("Enter the number :");
    scanf("%d",&num);

    //calling the function 
    countDigits(num);


    printf("Number of digits: %d\n", num_digits);

}

