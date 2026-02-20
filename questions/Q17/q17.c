// n natural number sum 

#include <stdio.h>

int main(){
    printf("enter n:");
    int n,sum=0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}