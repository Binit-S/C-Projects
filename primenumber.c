#include<stdio.h>
#include<math.h>
int isprime(int num) {
        if(num <=1){
            return 0 ; //not a prime
        }
        for (int i = 2 ; i<= sqrt(num) ; ++i){
        if (num%i== 0){
            return 0; //not a prime
            }
        }
        return 1;
}

int main (){
    int num ;
    printf("Enter the number =");
    scanf("%d",&num);

    int num1=num;

    if (isprime(num)){
        printf("%d is a Prime.\n",num1);
    }
    else {
        printf("%d is not a Prime.\n",num1);
    }
    return 0 ;
}
