#include <stdio.h>

int main(void){
    printf("enter row : ");
    int row;
    scanf("%d",&row);
    for (int i =1;i<=row;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",64+j);
        }
    printf("\n");
    }


    return 0;
}