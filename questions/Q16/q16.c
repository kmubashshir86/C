// alphabet or not
#include <stdio.h>

void main(){
    printf("enter a character:");
    char a;
    scanf("%c",&a);
    int x = (int) a;
    if (x>64 && x<90 || x>96 && x<97+26){
        printf("its a alphabet\n");
    }
    else{
        printf("not alphabet\n");
    }
}