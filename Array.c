#include <stdio.h>
void main(){

    int n[5];
    printf("Enter the five numbers");
    int i ;
    for (i=0 ; i<5 ;i++) {

        printf(" Enter the %d" , i);
        scanf("%d", &n[i]);

    }
    for (i=0 ; i<5 ;i++) {
        printf("%d,",n[i]);
    }

}