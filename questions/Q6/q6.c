//to compute quoitenet and reminder

#include <stdio.h>

int main(){
    int divisor,reminder,quoitent,dividant;
    printf("divisor,dividant : ");
    scanf("%d,%d",&divisor,&dividant);
    printf("reminder is %d and quoitent is %d\n",dividant%divisor,dividant/divisor);


    return 0;
}
