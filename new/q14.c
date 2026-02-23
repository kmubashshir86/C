#include <stdio.h>

int main(void) {
    int x;
    printf("enter int : ");
    scanf("%d",&x);
    printf("%s",x%400==0?"leap\n":x%100==0?"not leap\n":x%4==0?"leap\n":"not leap\n");
    return 0;
}