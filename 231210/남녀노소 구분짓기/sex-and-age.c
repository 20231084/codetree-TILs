#include <stdio.h>

int main() {
    int gennum, age;
    scanf("%d", &gennum);
    scanf("%d", &age);
    if(gennum==0)
    {
        if(age>=19)
        {
            printf("MAN");
        }
        else
        {
            printf("BOY");
        }
    }
    else
    {
        if(age>=19)
        {
            printf("WOMAN");
        }
        else
        {
            printf("GIRL");
        }
    }
    return 0;
}