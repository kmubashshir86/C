#include <stdio.h>
#include <string.h>
int x;
void swap(int i,int j,char str[x]){
    char temp;
    temp=str[j];
    str[j]=str[i];
    str[i]=temp;
}
void main(void) {
    printf("enter length of string : ");
    scanf("%d",&x);
    char str[x];
    printf("enter strrings : ");
    scanf("%s",&str);
    int i,j;
    j=x-1;
    i=0;
    while (i<=j){
        swap(i,j,str);
        i++;j--;

    }
printf("%s \n",str);
}