#include <stdio.h>

int main() {
    int ams, aes, bms, bes;
    scanf("%d %d\n%d %d", &ams, &aes, &bms, &bes);
    if(ams>bms)
        printf("A");
    else if(ams<bms)
        printf("B");
    else if(ams==bms && aes>bes)
        printf("A");
    else    
        printf("B");
    return 0;
}