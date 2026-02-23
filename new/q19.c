#include <stdio.h>

int main(void) {
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    int i;
    for(i =1; i<11;i++){
        printf("%d * %d = %d\n",x,i,x*i);
    }

    printf("\n");

    i =1;
    while(i!=11){
        printf("%d * %d = %d\n",x,i,x*i);
        i++;
    } 

    printf("\n");

    i=1;
    do{
        printf("%d * %d = %d\n",x,i,x*i);
        i++;
    } while(i!=11);

    return 0;
}