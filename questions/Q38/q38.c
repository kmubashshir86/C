#include <stdio.h>

long long int fact(int x);

int main(){
    printf("enter n : ");
    int n;
    scanf("%d",&n);
    printf("%lld\n",fact(n));
    return 0;
}

long long int fact(int x){
    if (x==1 || x==0){
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}