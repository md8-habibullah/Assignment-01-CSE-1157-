#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter a value for x (1 <= x <= 180): ");
    scanf("%d", &a);
    
    float b = sin(a * M_PI / 180); // Convert degrees to radians
    printf("Result: %.6f\n", b);
    
    return 0;
}
