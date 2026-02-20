#include <stdio.h>
#include <math.h>

int main(void){
  printf("enter number : ");
  int n;
  scanf("%d",&n);
  int n_rt = sqrt(n);
  while(n_rt!=1){
    if (n%n_rt==0){
      printf("composite\n");
      return 0;
    }
    n_rt--;
  }
  if (n==1 || n<0){
    printf("nothing\n");
  }
  else{
  printf("prime\n");}
  return 0;
}