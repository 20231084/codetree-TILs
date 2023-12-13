#include <stdio.h>
#include<stdbool.h>
int main() {
    int i;
    bool satisfied=true;
    for(i=1; i<=5; i++)
    {
        int a;
        scanf("%d", &a);
        if(a%3!=0)
            satisfied=false;
    }
    if(satisfied==true)
        printf("1");
    else
        printf("o");
    return 0;
}