#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("a) %d\n", (a > b) ? 1 : 0);
    printf("b) %d\n", (b < c) ? 1 : 0);
    printf("c) %d\n", (a == c) ? 1 : 0);
    
    return 0;
}
