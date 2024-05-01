#include <stdio.h>
#include<math.h>

void main() {
    int x;
    printf("Enter a year");
    scanf("%d",&x);

    if ((x%4==0 && x%100!=0 )||(x%400==0)){
        printf("%d is a leap year",x);
    }
    else{
        printf("%d is not a leap year",x);
    }
    return;}


