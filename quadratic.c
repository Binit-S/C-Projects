#include <stdio.h>
#include<math.h>

void main() {
    float x,y,a,b,c;
    printf("Enter the coefficient of x^2");
    scanf("%f",&a);
    printf("Enter the coefficient of x");
    scanf("%f",&b);
    printf("Enter the constant of i.e c");
    scanf("%f",&c);
    printf("Your quadratic equation is (%.0fx^2)+(%.0fx)+(%.0f)\n",a,b,c);

    //to check whether imaginary or real(equal and unequal)

    int discrimant=(pow(b,2)-4*a*c);

    if (discrimant==0){
        printf("Real and equal roots\n");
    }
    else if(discrimant>0){
        printf(("Real and unequal\n"));
    }
    else {
        printf("Imaginary roots\n");
    }

    x=(-b+sqrt((pow(b,2)-4*a*c)))/2*a;
    y=(-b-sqrt((pow(b,2)-4*a*c)))/2*a;

    printf("The two roots are %.1f and %.1f ",x,y);

    return;}
