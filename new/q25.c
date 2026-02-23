#include <stdio.h>
#include <math.h>

int len_(int x);
int main(void) {
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int i =0;
    int ans=0;
    int lenth;
    while(n!=0){
        lenth=len_(n);
        ans+=(n%10)*(ceil(pow( 10,(lenth-1))));
        n/=10;
        i++;
        
    }
    printf("%d\n",ans);
    return 0;
}

int len_(int x) {
    int ans=0;
    int temp=x;
    while(temp!=0){
        temp/=10;
        ans+=1;
    }
    return ans;
}