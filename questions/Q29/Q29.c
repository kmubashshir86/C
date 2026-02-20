#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int n);

int main(void){
  printf(" enter [a,b]:");
  int a,b;
  scanf("%d,%d",&a,&b);
  
  for (int i = a;i<=b;i++){
    if(prime(i)) {
    printf("%d\n",i);}
  }
  return 0;
}

bool prime(int n){
  int n_rt = sqrt(n);
  while(n_rt!=1){
    if (n%n_rt==0){
      return false;
    }
    n_rt--;
  }
  if (n==1 || n<0){
    return false;
  }
  else{
  return true;}
}