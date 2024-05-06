#include <stdio.h>
int main(){
    int num,num1,num2,num3;
    printf("Enter the number :");
    scanf("%d",&num);

    num1=num;

    // to find the factors
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            num2 += i;
            num3 = num2-num1;
        }
    }

    if (num1== num3){
        printf("Perfect number");
    }else {
        printf("Not perfect");}

    return 0;}