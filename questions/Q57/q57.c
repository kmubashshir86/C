#include <stdio.h>

int main(void) {
    int length;
    printf("enter string length : ");
    scanf("%d",&length);
    printf("enter string : ");
    char str[length];
    scanf("%s",&str);
    int i=0;
    for (i;i<=length;i++){
        if ((str[i]<='z' && str[i]>='a') || (str[i]<='Z' && str[i]>='A')){
            continue;
        }
        else{
            if (length == i){
                break;
            }
            str[i]=str[i+1];
        }
    }
    printf("%s",str);
    return 0;
}