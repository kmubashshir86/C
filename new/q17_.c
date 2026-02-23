#include <stdio.h>

int main(void) {
    int n,ans=0,i=1;
    printf("enter n : ");
    scanf("%d",&n);
    while(i!=(n+1)){
        if (n<0){
            break;
        }
        ans+=i;
        i++;
    }
    printf("%d\n",ans);
    return 0;
}