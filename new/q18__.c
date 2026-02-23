
#include <stdio.h>

int main(void) {
    int x;
    printf("enter x : ");
    scanf("%d",&x);
    int ans=1;
    int i=1;
    do{
        ans*=i;
        i++;
    }while(i!=(x+1));
    printf("%d!= %d\n",x,ans);
    return 0;
}