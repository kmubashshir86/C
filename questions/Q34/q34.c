#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool IsPrime(int n);
int main(){
    printf("enter a,b : ");
    int a,b;
    scanf("%d,%d",&a,&b);
    int i = a;
    for (i=a;i<=b;i++){
        if (i==1){
            continue;
        }
        if (IsPrime(i)){
            printf("%d\n",i);
        }
        else{
            printf("");
        }
    }

    return 0;
}

bool IsPrime(int n){
    int n_sqr = (int) sqrt(n);
    for(int i = 2;i<=n_sqr;i++){
        if (n%i==0){
            return false;
        }
        else{
            continue;
        }
    return true;

    }
}