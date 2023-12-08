#include <stdio.h>

int main() {
    int h, w;
    scanf("%d %d", &h, &w);
    int bmi=w*100*100/(h*h);
    printf("%d\n", bmi);
    if(bmi>=25)
        printf("Obesity");
    return 0;
}