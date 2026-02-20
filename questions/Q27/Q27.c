#include <stdio.h>

int reverse(int x);

int main(){
    printf("enter number : ");
    int num;
    scanf("%d",&num);
    if (num==reverse(num)){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }
    return 0;
}

int reverse(int x){
         int n=x;
         int ans=0;
         while(x!=0){
                  int a=n-((n/10)*10);
                  n=(n-a)/10;
                  ans+=a;
                  x/=10;
         ans*=10;
                  }
         return ans/10;}
