#include <stdio.h>

int main(){
  int x;
  printf("enter number : ");
  scanf("%d",&x);
  int ans=1;
  do{ ans*=x;
      x--;} while (x!=0);
  printf("%d\n",ans);
  
  
  
  return 0;
}