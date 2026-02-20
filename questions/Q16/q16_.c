#include <stdio.h>
#include <ctype.h>
void main(void) {
    printf("enter alphabet: ");
    char c;
    scanf("%c",&c);
    if( isalpha(c)){
        printf("alphabet\n");
    }
    else{
        printf("not alphabet\n");
    }
}