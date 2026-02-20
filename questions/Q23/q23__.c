#include <stdio.h>

int main(){
    int i = 65;
    do{
        printf("%c\n",i);
        i++;
    }
    while(i!=65+25);

    return 0;
}