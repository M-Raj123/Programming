#include<stdio.h>
#include<stdlib.h>

// strlen
int findStrLen(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++){};
    return i;
}

// strcpy
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
    
    // null terminate dest string
    *dest='\0';
    
    return ptr;
}

// strncpy
char* stringNCopy(char * dest, char *src, int size)
{
    if(dest == NULL && src==NULL)
    {
        return NULL;
    }

    char *str = dest;
    int i=1;
    while(*src!='\0')
    {
        if(i>size) break;
        *dest = *src;
        i++;
        dest++;
        src++;
    }

    // null terminate dest string
    *dest = '\0';
    
    return str;
}
