#include <stdio.h>

int main(){
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("%s\n",(x%2==0?"even":"odd"));
    return 0;
}