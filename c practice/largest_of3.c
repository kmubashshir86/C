#include <stdio.h>

int main(void) {
    int x,y,z;
    printf("enter three numbers x,y,z : ");
    scanf("%d,%d,%d",&x,&y,&z);
    if (x<y){
        if (y>z){
            printf("%d\n",y);
        }
        else{
            printf("%d\n",z);
        }
    }
    else{
        if(x>z){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",z);
        }
    }
    return 0;
}