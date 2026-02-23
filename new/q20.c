#include <stdio.h>

int main(void) {
    printf("enter n : ");
    int n;
    scanf("%d",&n);
    int a1=1,a2=1;
    int i = 1;
    int temp;
    while (i!=(n+1)){
        printf("%d\n",a1);
        temp=a1;
        a1=a2;
        a2+=temp;
        i++;

    }
    return 0;
}