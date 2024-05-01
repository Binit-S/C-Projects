#include <stdio.h>
#include<math.h>

void main() {
    int x,y,z;
    printf("Enter total marks secured by StudentA =");
    scanf("%d",&x);
    if (x>=90 && x<=100){
        printf("Secured grade is O");
    }
    else if (x>=80 && x<=89){
        printf("Secured grade is E");
    }
    else if (x>=70 && x<=79){
        printf("Secured grade is A");
    }
    else if (x>=60 && x<=69){
        printf("Secured grade is B");
    }
    else if (x>=50 && x<=59){
        printf("Secured grade is C");
    }
    else if(x>=40 && x<=49){
        printf("Secured grade is D");
    }
    else {
        printf("Secured grade is F");
    }
//    printf("Enter total marks secured by StudentB =");
//    scanf("%d",&y);
//    printf("Enter total marks secured by StudentC =");
//    scanf("%d",&z);

    return;}
