#include <stdio.h>

int main() {
    int a=2;
    int b=5;
    
    int temp=a;
    a=b;
    b=temp;

    printf("%d\n", a);
    printf("%d", b);
    return 0;
}