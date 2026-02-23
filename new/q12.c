#include <stdio.h>

int main(void) {
    int x,y,z;
    printf("enter x,y,z : ");
    scanf("%d,%d,%d",&x,&y,&z);
    if (x<=y && z<=y){
        printf("y\n");
    }
    else if(y<=x && z<=x){
        printf("x\n");
    }
    else if(z>=y && z>=x){
        printf("z\n");
    }

    printf("%s\n",x<=y?y<=z?"z":"y":x<=z?"z":"x");

    if(x<=y){
        if(y<=z){
            printf("z\n");
        }
        else{
            printf("y\n");
        }
    }
    else{
        if(x<=z){
            printf("z\n");
        }
        else{
            printf("x\n");
        }
    }

    if (x<=y && z<=y){
        printf("y\n");
    }
    if(y<=x && z<=x){
        printf("x\n");
    }
    if(z>=y && z>=x){
        printf("z\n");
    }
    return 0;
}