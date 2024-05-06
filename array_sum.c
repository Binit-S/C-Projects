#include<stdio.h>
int main(){
    //Sum of numbers in the array
    int array,i,n,sum;
    printf("Enter the no. variables");
    scanf("%d",&n);
    for (i=0 ; i<n ; i++ ){
        printf("Enter the number");
        scanf("%d",&array);
        sum += array ;
    }
    printf("The sum is %d",sum);
}
