#include <stdio.h>
#include <string.h>
int x;
void swap(int i,int j,char str[x]){
    if (j-i==-1 || j-i==0){
        return;
    }
    char temp;
    temp=str[j];
    str[j]=str[i];
    str[i]=temp;
    swap(++i,--j,str);
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
    swap(i,j,str);
printf("%s \n",str);
}