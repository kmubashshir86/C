#include <stdio.h>

int main(){
    printf("base:");
    int a;
    scanf("%d",&a);
    printf("pow:");
    int b;
    int ans=1;
    scanf("%d",&b);
    while(b!=0){
        ans*=a;
        b--;
    }
    printf("%d\n",ans);
    return 0;
}