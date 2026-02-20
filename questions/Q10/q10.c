// even odd
#include <stdio.h>

int main(){
    int x;
    printf("enter num:");
    scanf("%d",&x);
    if (x % 2==1 || x%2==-1){
        printf("odd\n");
    }
    else{
        // 0 is even 
        printf("even\n");
    }


    return 0;
}