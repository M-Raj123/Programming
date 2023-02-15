#include<stdio.h>
#include<stdlib.h>

// strlen
int findStrLen(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++){};
    return i;
}

// strcat
char* stringCopy(char *dest, char *src)
{
    if(dest == NULL && src==NULL)
    {
        return NULL;
    }
    
    char *ptr = dest;
    while(*src!='\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest='\0';
    return ptr;
}
