#include <stdio.h>
#include <stdbool.h>
void main(void) {
    printf("enter two number a,b:");
    int a,b;
    scanf("%d,%d",&a,&b);
    int temp;
    temp=a;
    a=(a>b)?a:b;
    b=(a>b)?b:temp;
            int i=1;
            while(true){
                if ((a*i)%b==0){
                    printf("%d",a*i);
                    break;
                }
                else{
                    i++;
                }
            }
    
}