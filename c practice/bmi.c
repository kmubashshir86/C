#include <stdio.h>

void main(void)
{
    float height , weight;
    printf("enter height,weight: ");
    scanf("%f,%f",&height,&weight);
    printf("YOUR BMI IS : %f",weight/(height * height));
    printf("\n");

}