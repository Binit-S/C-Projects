#include<stdio.h>
int main (){
    printf("Rows :");
    int nrows;
    scanf("%d",&nrows);

    for (int i = 1 ; i<=nrows ; ++i){
        for (int j = 1 ; j<=i ; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
