#include <stdio.h>
#include <math.h>
int fact(int x){
    if (x==0 || x==1){
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}

int ncr(int n,int r){
    return (fact(n))/(r*(fact(n-r)));
}

int main(void) {
    int i =13;
    for(int i=13;i>=1;i-=2){
        for(int j=0;j<=i;j++){
            printf(" _");
        }
        if (i==1){
            break;
        }
        
        printf("\n");
    }
    return 0;
}