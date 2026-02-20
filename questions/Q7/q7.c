//size of int double float char
//%zu for size
#include <stdio.h>

int main(){
    printf("size of int id %d bytes\n",sizeof(int));
    printf("size of float id %d bytes\n",sizeof(float));
    printf("size of double id %d bytes\n",sizeof(double));
    printf("size of char id %d bytes\n",sizeof(char));

    return 0;
}