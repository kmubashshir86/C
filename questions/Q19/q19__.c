#include <stdio.h>

int main(){
  int n;
  printf("enter number :");
  scanf("%d",&n);
  int ans =1;
  while(n!=0){
    ans*=n;
    n--;
  }
  
  printf("%d\n",ans);
  return 0;
}