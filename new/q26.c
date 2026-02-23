#include <stdio.h>

int main(void) {
    int a;
    unsigned int b;
    printf("enter a,b : ");
    scanf("%d,%d",&a,&b);
    int ans=1;
    while(b!=0){
        ans*=a;
        b--;
    }
    printf("%d\n",ans);
    return 0;
}