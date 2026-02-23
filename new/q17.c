#include <stdio.h>

int main(void) {
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    printf("%d\n",ans);
    return 0;
}