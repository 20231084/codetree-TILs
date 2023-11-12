#include <stdio.h>
#include <string.h>

int main() {
    char s[3][21];
    int len[3]={0}, i;
    int max=0, min=21;

    for(i=0; i<3; i++)
    {
        scanf("%s", s[i]);
    }
    for(i=0; i<3; i++)
    {
        len[i]=strlen(s[i]);
    }
    for(i=0; i<3; i++)
    {
        if(max<len[i])
            max=len[i];
        if(min>len[i])
            min=len[i];
    }

    printf("%d", max-min);

    return 0;
}