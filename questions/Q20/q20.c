#include <stdio.h>

int main(){
    //1 1 2 3 5 8 13 21 34 55
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i=1;
    int ans0,ans1;
    ans0=1;
    ans1=1;
    printf("%d\n%d\n",ans0,ans1);
    int temp;
    while (i != n+1){
        
        temp=ans1;
        ans1=temp+ans0;
        ans0=temp;
        printf("%d\n",ans1);
        i++;


    }



    return 0;
}