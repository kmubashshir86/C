//factorial

#include <stdio.h>

int main(){
    int x;
    printf("enter number :");
    scanf("%d",&x);
    int i,ans;
    ans=1;
    i=1;
    while(i<(x+1)){
        ans*=i;
        i++;
    }
    printf("%d\n",ans);

    return 0;
}