#include<stdio.h>
#include<stdlib.h>

// strlen
int findStrLen(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++){};
    return i;
}
