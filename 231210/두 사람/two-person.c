#include <stdio.h>

int main() {
    int age1, gen1, age2, gen2;
    scanf("%d %c", &age1, &gen1);
    scanf("%d %c", &age2, &gen2);

    if(age1>=19 || age2>=19 && gen1=='M' || gen2=='M')
        printf("1");
    else
        printf("0");
    return 0;
}