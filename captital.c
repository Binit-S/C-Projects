#include <stdio.h>
#include<math.h>

void main() {
    char alpha;
    printf("Enter your character in lowercase =");
    scanf("%c",&alpha);

    if (alpha>='a' && alpha<='z'){
        printf("%c in uppercase is %c",alpha,alpha-32);
    }
    else if (alpha>='A' && alpha<='z'){
        printf("%c is already in Uppercase");
    }
    else {
        printf("Not an alpahabet");
    }

    return;}
