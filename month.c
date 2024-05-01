#include <stdio.h>

void main() {
    int x;
    printf("Enter the number of days:");
    scanf("%d",&x);

    switch (x) {
        case 28:
            printf("February\n");
            break;
        case 30:
            printf("April,June,September and November");
            break;
        case 31:
            printf("January,March,May,July,August,October and December");
            break;
        default:
            printf("invalid");
    }
    return;}
