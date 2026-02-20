#include <stdio.h>

void main(void) {
    printf("enter a , b : ");
    int divisor,divident;
    scanf("%d %d",&divisor,&divident);
    if (divisor > divident){
        divisor=divident+divisor;
        divident=divisor-divident;
        divisor=divisor-divident;
    }
    int rem=1;
    int temp;
    while(rem!=0){
        rem=divident%divisor;
        temp = divisor;
        divisor=rem;
        divident= temp;
    }
    printf("%d\n",divident);
}