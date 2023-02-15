#include<stdio.h>
#include<stdlib.h>

// strlen()
int findStrLen(char *str)
{
    int i=0;
    for(i=0;str[i]!='\0';i++){};
    return i;
}

// strcpy()
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

// strncpy()
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

// strcat()
char* stringConcat(char* ptr1, char* ptr2)
{
    printf("str1:%s\nstr2:%s\n",ptr1,ptr2);
    char *tmp = (char*)malloc(sizeof(char));
    int i=0;
    
    for(i=0;ptr1[i]!='\0';i++)
    {
        tmp[i] = ptr1[i];
    }
    for(int j=0;ptr2[j]!='\0';j++)
    {
        tmp[i++] = ptr2[j];  
    }

    tmp[i]= '\0';
    return tmp;
}

// strchr()
char * stringChar(char *str,int a)
{
    int flag = 0;
    while(*str!='\0')
    {
        if(*str==(char)a) 
        {
            flag=1;
            break;   
        }
        str++;
    }
    if(flag==0) 
    {
        return NULL;
    }
    else
    {
        return str;
    }
}

// strrev()
char* stringReverse(char *s)
{
    // printf("the original String:%s\n",s);
    int i = 0, j = findStrLen(s)-1;
    while( i < j )
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;

        i++;
        j--;
    }
    return s;
}

// memcpy()
char* memCpy(char * dest, char *src, int n)
{
    char *start = dest ;
    int i=0;
    for(i=0;i<n;i++)
    {
        dest[i] = src[i];
    }
    return start;
}

// memmove()
char *memMove(char *dest, char *src, int n) 
{
  char *d = dest;
  char *s = src;
  if (d == s) return dest;  // check address
  if (d < s)  
  {
     while (n--)  
     {
        *d++ = *s++;  // higher to lower
     }
  } 
  else 
  {
    d += n - 1;
    s += n - 1;
    while(n--)
    {
      *d-- = *s--;  // lower to higher
    }
  }
  return dest;
}
