#include <stdio.h>

int main(){
         printf("enter number : ");
         int x;
         scanf("%d",&x);
         int n=x;
         int ans=0;
         while(x!=0){
                  int a=n-((n/10)*10);
                  n=(n-a)/10;
                  ans+=a;
                  x/=10;
         ans*=10;
                  }
         printf("%d\n",ans/10);
         return 0;}
