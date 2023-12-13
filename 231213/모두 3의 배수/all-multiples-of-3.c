#include <stdio.h>
#include<stdbool.h>
int main() {
    int n, i;
    scanf("%d", &n);
    bool satisfied=true;
    for(i=1; i<n; i++)
    {
        if(i%3==0)
            satisfied=false;
    }
    if(satisfied==true)
        printf("1");
    else
        printf("o");
    return 0;
}