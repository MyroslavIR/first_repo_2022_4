#include <stdio.h>
#include <math.h>

//my first commit
int main() {
    float x, y, z;
    x = 2.14;
    y = 0.578;
    z = sin(pow(x, 2)) + pow(sin(pow(x, 3)), 2) + pow(sin(pow(y, 4)), 3);
    printf("Answer %f", z);
    return 0;
}