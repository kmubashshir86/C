#include <stdio.h>

void main(void) {
    printf("enter number : ");
    int x;
    scanf("%d",&x);
    int i=2;
    printf("%d\n",1);
    while(i!=x){
        if (x%i==0){
            printf("%d\n",i);
        }
        i++;

    }

}