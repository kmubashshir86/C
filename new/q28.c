#include <stdio.h>
#include <math.h>
int main(void) {
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    int x_root;
    x_root = ceil(sqrt(x));
    for(int i=2;i<=x_root;i++){
        if (x%i==0){
            printf("composite\n");
            break;
        }
        else{
            printf("prime\n");
            return 0;
        }
    }}
    