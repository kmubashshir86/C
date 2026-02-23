#include <stdio.h>

int main(void) {
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    printf("%s\n",(x%2==0)?"even":"odd");
    return 0;
}