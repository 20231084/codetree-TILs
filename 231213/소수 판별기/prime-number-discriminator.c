#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    bool satisfied=true;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            satisfied=false;
    }
    if(satisfied==true)
        printf("P");
    else
        printf("C");
    return 0;
}