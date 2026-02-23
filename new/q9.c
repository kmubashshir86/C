#include <stdio.h>
void swap(int,int);

void swap_(int,int);

void swap_t(int,int);

int main(void) {
    int x,y;
    printf("enter two int x,y : ");
    scanf("%d,%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x is %d and y is %d\n",x,y);
    return 0;
}

void swap(int x,int y){
    x=x*y;
    y=x/y;
    x=x/y;

}

void swap_(int x,int y){
    x=x^y;
    y=x^y;
    x=x^y;

}

void swap_t(int x,int y){
    int temp;
    temp =x;
    x=y;
    y=temp;
}