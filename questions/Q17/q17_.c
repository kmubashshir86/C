// n natural number sum 

#include <stdio.h>

int main(){
    printf("enter n:");
    int n,sum=0;
    scanf("%d",&n);
    int i=1;
    while(n>=i){
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}