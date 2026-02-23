#include <stdio.h>

int main(void) {
    int a,b;
    printf("enter two numbers a,b : ");
    scanf("%d,%d",&a,&b);
    int max=(a<=b)?b:a;
    int divisor,divident;
    if (max==a){
        divisor=b;
        divident=a;
    }
    else{
        divisor=b;
        divident=a;
    }
    int rem = -1;
    while (rem!=0){
        if (divident%divisor==0){
            break;
        }
        rem=divident%divisor;
        divident=divisor;
        divisor=rem;
    }
    printf("gcd is %d\n",rem);
    return 0;
}