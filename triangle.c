#include <stdio.h>
#include<math.h>

void main() {
    int x,y,z;
    printf("sides=");
    scanf("%d%d%d",&x,&y,&z);

    if (x+y>z && y+z>x && x+z>y){
        printf("Sides will form a triangle");
    }
    else{
        printf("Will not form a triangle");
    }
    return;}

