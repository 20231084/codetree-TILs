#include <stdio.h>

int main() {
    int tem_1, tem_2, tem_3;
    char cold_1, cold_2, cold_3;
    
    scanf(" %c %d", &cold_1, &tem_1);
    scanf(" %c %d", &cold_2, &tem_2);
    scanf(" %c %d", &cold_3, &tem_3);

    if(cold_1=='Y' && tem_1>=37)
    {
        if((cold_2=='Y' && tem_2>=37) || (cold_3=='Y' && tem_3>=37))
            printf("E");
        else   
            printf("N");
    }
    else
    {
        if((cold_2=='Y' && tem_2>=37) && (cold_3=='Y' && tem_3>=37))
            printf("E");
        else
            printf("N");
    }
    return 0;
}