#include <stdio.h>
#include <stdbool.h>
#include <math.h> 
bool IsPrime(int n);
int armstrong(int num);
void main(void) {
    printf("enter number a,b : ");
    int a,b;
    scanf("%d,%d",&a,&b);
    while(a!=(b+1)){
        if(IsPrime(a) && armstrong(a)){
            printf("%d\n",a);
        }
        else{
            printf("");
        }
        a++;
    }
    
}

bool IsPrime(int n){
    if (n==1){
        return false;
    }
    int n_sqr = (int) sqrt(n);
    for(int i = 2;i<=n_sqr;i++){
        if (n%i==0){
            return false;
        }
        else{
            continue;
        }
    return true;

    }}

int len(int x){
    int i =0;
    while (x!=0){
        x/=10;
        i++;
    }
    return i;
}

int last(int x){
    int start=x;
    x=x/10;
    x*=10;
    return (start-x);
}
int armstrong(int num){
    const int k=num;
    int n = len(num);
    int ans=0;
    int power;
    while (true){
        power=ceil(pow(last(num),n));
        ans+=power;
        if ((num-last(num))<10){
            break;
        }
        num=(num-last(num))/10;
        
    }
    if (k==ans){
        return true;
    }
    else{
        return false;}
}