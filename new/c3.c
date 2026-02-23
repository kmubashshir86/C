#include <stdio.h>

int add_ten(int);

int main(void) {
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    printf("%d + 10 = %d\n",num,add_ten(num));
    return 0;
}

int add_ten(int x){
    return (x+10);
}