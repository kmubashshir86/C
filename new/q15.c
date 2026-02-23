#include <stdio.h>

int main(){
    int x;
    printf("enter int : ");
    scanf("%d",&x);
    if (x>0){
        printf("+\n");
    }
    else{
        if (x<0){
            printf("-\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}