#include <stdio.h>
int pow_(int a,int b){
    if (b==1){
        return a;
    }
    else{
        return (a*pow_(a,b-1));
    }
}

int main(){
    printf("%d\n",pow_(2,3));
    return 0;
}