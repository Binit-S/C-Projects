#include <stdio.h>

void main() {
    char x;
    printf("Enter the alphabet");
    scanf("%c",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("alphabet is vowel");

    }
    else{
        printf("alphabet is consonant");
    }
    return;}
