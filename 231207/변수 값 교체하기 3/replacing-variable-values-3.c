#include <stdio.h>

int main() {
    int a=3;
    int b=5;
    int temp=a;
    a=b;
    b=temp;
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}