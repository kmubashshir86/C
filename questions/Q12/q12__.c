#include <stdio.h>

int main(void) {
    int x, y, z, largest;
    printf("Enter 3 integers x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    largest = (x >= y) ? ((x >= z) ? x : z)  // if x >= y, check x vs z
                       : ((y >= z) ? y : z); // else y >= z

    printf("Largest: %d\n", largest);

    return 0;
}