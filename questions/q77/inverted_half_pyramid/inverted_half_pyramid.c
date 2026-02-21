#include <stdio.h>

int main(void){
    printf("enter row : ");
    int row;
    scanf("%d",&row);
    for (int i = row ; i!=0 ;i--){
        for (int j=1 ;j<=i ;j++){
            printf("* ");
        }
    printf("\n");
    }


    return 0;
}