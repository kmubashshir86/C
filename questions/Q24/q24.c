#include <stdio.h>

int main(){
    printf("enter number : ");
    int n;
    scanf("%d",&n);
    int ans=0;
    while (n!=0){
        n/=10;
        ans+=1;
    }
    printf("%d\n",ans);
    return 0;
}