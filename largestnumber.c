#include<stdio.h>
int main(){
    //Sum of numbers in the array
    int i,n,largestnum;
    printf("Enter the no. variables");
    scanf("%d",&n);
    int array[n];

    for (i=0 ; i<n ; i++ ){
        printf("Enter the number");
        scanf("%d",&array[i]);
    }
    largestnum = array[0];

    for (i=0; i<n ; i++ ){
        if (array[i]>largestnum){
            largestnum = array[i];
        }
    }
    printf("The largest number is %d",largestnum);

}
