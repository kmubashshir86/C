#include <stdio.h>

int odd_or_even(int x);

int main(){
    printf("%d\n",odd_or_even(-7));
    return 0;
}

int odd_or_even(int x){
    return ((x%2==0?2:1));
}