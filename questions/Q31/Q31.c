#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int len(int x);
int last(int x);
int armstrong(int num);

int main(){
    printf("enter two numbers(A,B) : ");
    int a,b;
    scanf("%d,%d",&a,&b);
    for (int i=a;i!=(b+1);i++){
        if (armstrong(i)){
            printf("%d\n",i);
        }
        else{
            printf("");
        }
    }
    return 0;
}


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