#include <stdio.h>
//fibonacci
int main() {
    int w,x,y,z;
    printf("print the first two numbers");
    scanf("%d%d",&x,&y);
    printf("Times");
    scanf("%d",&z);
    int i;
    for (i=0;i<z;i++){
        w=x+y;
        x=y;
        y=w;
        printf("%d",w);
    }

}
