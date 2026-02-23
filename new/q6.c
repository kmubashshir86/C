#include <stdio.h>

int main(void) {
    //    ____
    // a/  b  |c rem
    int a,b;
    printf("enter divident,divider : ");
    scanf("%d,%d",&b,&a);
    printf("quoitent and reminder are as : %d , %d\n",b/a,b%a);
    return 0;
}