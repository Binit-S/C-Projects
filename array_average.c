#include<stdio.h>
int main(){
    //Average of numbers in the array
    int array,i,n,sum,num2;
    printf("Enter the no. variables");
    scanf("%d",&n);
    num2 = n;
    for (i=0 ; i<n ; i++ ){
        printf("Enter the number");
        scanf("%d",&array);
        sum += array ;
    }
    int average = sum/num2;
    printf("The average is %d",average);
}
