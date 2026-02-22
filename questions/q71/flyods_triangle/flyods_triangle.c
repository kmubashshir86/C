#include <stdio.h>

int main(void){
    printf("enter row : ");
    int row;
    scanf("%d",&row);
    int num=0;
    for (int i =1;i<=row;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",++num);
        }
    printf("\n");
    }


    return 0;
}