#include <stdio.h>

int main(void){
    int divident,divisor;
    printf("enter divident :");
    scanf("%d",&divident);
    printf("enter divisor : ");
    scanf("%d",&divisor);
    printf("quoitent : %d , reminder: %d when divisor,divident are respectively %d,%d\n",divident/divisor,divident%divisor,divisor,divident);
    return 0;
}