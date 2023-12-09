#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a>=1.0)
        printf("High");
    else if(a>=0.5)
        printf("Middle");
    else
        printf("Low");
    return 0;
}