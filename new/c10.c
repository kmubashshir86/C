#include <stdio.h>

char* is_odd_or_even(int);

int main(void) {
    int x;
    printf("enter int : ");
    scanf("%d",&x);
    printf("%s\n",is_odd_or_even(x));
    return 0;
}

char* is_odd_or_even(int num){
    return (num%2==0)?"even":"odd";
    
}