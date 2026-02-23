#include <stdio.h>

int main(void) {
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    int ans=0;
    int temp=x;
    while(temp!=0){
        temp/=10;
        ans+=1;
    }
    printf("%d\n",ans);
    return 0;
}