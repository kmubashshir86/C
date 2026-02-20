#include <stdio.h>

int main(){
  printf("enter n : ");
  int n;
  scanf("%d",&n);
  int sum =0;
  do{
    sum+=n;
    n--;
  }while(n!=0);
  printf("%d\n",sum);
  return 0;
}