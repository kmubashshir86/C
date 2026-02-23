#include <stdio.h>

char* int_max(int,int);

int main(void) {
    int x,y;
    printf("enter x,y : ");
    scanf("%d,%d",&x,&y);
    printf("%s is greater\n",int_max(x,y));
    return 0;
}

char* int_max(int a,int b){
    if (a==b){
        return "equal";
    }
    return (a>b?"x":"y");
}