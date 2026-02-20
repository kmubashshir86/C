#include <stdio.h>

int main(void) {
    int x, y, z;
    printf("Enter 3 integers x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y) {
        if (x >= z) {
            printf("%d\n", x);  // x is largest
        } else {
            printf("%d\n", z);  // z is largest
        }
    } else {  // y > x
        if (y >= z) {
            printf("%d\n", y);  // y is largest
        } else {
            printf("%d\n", z);  // z is largest
        }
    }

    return 0;
}