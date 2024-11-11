#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("1) %d\n", (a < b) ? 1 : 0);
    printf("2) %d\n", (b > c) ? 1 : 0);
    printf("3) %d\n", (a != c) ? 1 : 0);
    
    return 0;
}
