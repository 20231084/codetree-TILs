#include <stdio.h>

int main() {
    int a_ma, a_en, b_ma, b_en;
    scanf("%d %d\n", &a_ma, &a_en);
    scanf("%d %d", &b_ma, &b_en);
    printf("%d", a_ma>b_ma && a_en>b_en);
    return 0;
}