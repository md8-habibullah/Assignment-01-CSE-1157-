#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Enter a floating point number: ");
    scanf("%f", &a);
    
    int b = (int)ceil(a); // Round up
    int c = (int)floor(a); // Round down
    float d = fabs(a); // Absolute value
    
    printf("A = %d, B = %d, C = %.2f\n", b, c, d);
    
    return 0;
}
