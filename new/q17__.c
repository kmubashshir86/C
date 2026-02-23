#include <stdio.h>

int main(void) {
    printf("enter n : ");
    int n;
    scanf("%d",&n);
    int ans =0,i=1;
    do{
        ans+=i;
        i++;
    }while(i!=(n+1));
    printf("%d\n",ans);
    return 0;
}