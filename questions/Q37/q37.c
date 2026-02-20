#include <stdio.h>
int sigmax(int x);
int main(){
         printf("enter n : ");
         int n;
         scanf("%d",&n);
         printf("%d\n",sigmax(n));


         return 0;}

int sigmax(int x){
         if (x==1){
                  return 1;}
         else{
                  return sigmax(x-1)+x;}}