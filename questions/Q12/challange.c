// fxn that return bigger number from 2
#include <stdio.h>
int big(int x, int y);
int main(){
    printf("%d\n",big(1,1));
    return 0;
}

int big(int x, int y){
    if (x>=y){
        return x;
    }
    else{
        return y;
    }
}