#include<stdio.h>
void main(){
   int x=0;
   int y;
   int sum,average;
   while (x<10) {
       printf("Enter the number");
       scanf("%d", &y);
       x++;

       sum+=y;
       average=sum/x;
   }
   printf("%d\n",sum);
   printf("%d",average);
}


