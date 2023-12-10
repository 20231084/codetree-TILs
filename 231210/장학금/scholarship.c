#include <stdio.h>

int main() {
    int mt, ft;
    scanf("%d %d", &mt, &ft);
    if(mt>=90 && ft>=95)
        printf("100000");
    else if(mt>=90 && ft>=90)
        printf("50000");
    else 
        printf("0");
    return 0;
}