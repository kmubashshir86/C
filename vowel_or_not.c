#include <stdio.h>

int main(void) {
    char a;
    printf("enter char : ");
    scanf("%c",&a);
    if ((a >= 'A' && a<='Z') || (a >= 'a' && a<='z')){
        if((a=='A' || a=='E' || a=='i' || a=='O' || a=='U') || (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')){
            printf("vowel\n");}
        else{
            printf("not vowel\n");}}
    else{
        printf("not alphabet\n");}
return 0;}