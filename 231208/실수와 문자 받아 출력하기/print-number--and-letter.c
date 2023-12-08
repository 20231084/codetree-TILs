#include <stdio.h>

int main() {
    char c;
    float a, b;
    scanf("%c\n%f\n%f", &c, &a, &b);
    printf("%c\n", c);
    printf("%.2f\n%.2f", a, b);
    return 0;
}