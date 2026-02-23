
#include <stdio.h>

int main(void) {
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    int ans=1;
    int i=1;
    while(i!=(x+1)){
        ans*=i;
        i++;
    }
    printf("%d!= %d\n",x,ans);
    return 0;
}