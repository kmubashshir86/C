#include <stdio.h>
#include <ctype.h>

int main(void) {
    char a;
    printf("enter char : ");
    scanf("%c",&a);
    printf("%d\n",isalpha(a));
    int is_alphabet=((a<='Z' && a>='A') || (a<='Z' && a>= 'A'));
    printf("%d\n",is_alphabet);
    return 0;
}