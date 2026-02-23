#include <stdio.h>

int main(void) {
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    printf("%d!= %d\n",x,ans);
    return 0;
}