#include <stdio.h>

int main(void){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    x =( x > 0 )?1:-1;
    printf("%d\n",x);
    return 0;
}