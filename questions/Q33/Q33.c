#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("enetr (a_b) a,b,_ ");
    scanf("%d,%d,%c",&a,&b,&c);
    switch(c){
        
        case '-':
            printf("%d %c %d = %d\n",a,c,b,a-b);
            break;
        case '*':
            printf("%d %c %d = %d\n",a,c,b,a*b);
            break;
        case '/':
            printf("%d %c %d = %d\n",a,c,b,a/b);
            break;
        case '+':
            printf("%d %c %d = %d\n",a,c,b,a+b);
            break;



    }

    return 0;
}