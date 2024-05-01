#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the multiple=");
    scanf("%d",&a);

    //TO find the factors

    for (b=1 ; b<=a ; b++){
        if (a%b==0){
            printf("%d\n",b);

        }
    }
    return 0;
}


