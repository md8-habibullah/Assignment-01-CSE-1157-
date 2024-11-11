#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("a++ : %d\n", a++);
    printf("++a : %d\n", ++a);
    printf("a-- : %d\n", a--);
    printf("--a : %d\n", --a);
    
    return 0;
}
