#include <stdio.h>

int main(){
  printf("enter n: ");
  int n;
  scanf("%d",&n);
  printf("%d\n",1);
  int a1 =1 , a2=1;
  while(n!=0){
    
    printf("%d\n",a2);
    a2=a2+a1;
    a1=a2-a1;
    n--;
    
  }  
  return 0;
}