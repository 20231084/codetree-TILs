#include <stdio.h>

int main() {
    double sum = 0.0;
    double score;
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &score);
        sum += score;
    }
    double average = sum / 8;
    printf("%.1lf", average);
    return 0;
}