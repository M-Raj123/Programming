#include<stdio.h>
#include "mylib.h"
void bflush()
{
    while(getchar()!='\n');
}

int main()
{
    
    char str[100]= "HELLOWORLD";
    printf("%s\n",str);
    // strlen
    printf("Length of the String %s is %d\n",str,findStrLen(str));
    // strrev
    printf("the reversed string:%s\n",stringReverse(str));

    // strcpy
    char dest1[100],src1[100];
    printf("enter the string1:");
    scanf("%[^\n]c",dest1);
    bflush();
    printf("enter the string2:");
    scanf("%[^\n]c",src1);
    printf("copied string:%s\n",stringCopy(dest1,src1));

    // strncpy
    char dest2[100],src2[100];
    bflush();
    printf("enter the string1:");
    scanf("%[^\n]c",dest2);
    bflush();
    printf("enter the string2:");
    scanf("%[^\n]c",src2);
    int n1 ;
    printf("enter the size:");
    scanf("%d",&n1);
    printf("copied n string:%s\n",stringNCopy(dest2,src2,n1));

    

    // memmove
    char dest3[100],src3[100];
    bflush();
    printf("enter the string1:");
    scanf("%[^\n]c",dest3);
    bflush();
    printf("enter the string2:");
    scanf("%[^\n]c",src3);
    int n2 ;
    printf("enter the size:");
    scanf("%d",&n2);
    printf("memmove string:%s\n",memMove(dest3,src3,n2));
    

    // memcpy
    char dest4[100],src4[100];
    bflush();
    printf("enter the string1:");
    scanf("%[^\n]c",dest4);
    bflush();
    printf("enter the string2:");
    scanf("%[^\n]c",src4);
    int n3 ;
    printf("enter the size:");
    scanf("%d",&n3);
    printf("memcpy string:%s\n",memCpy(dest4,src4,n3));
    
    
    // strtok
    char dest5[100],ch;
    bflush();
    printf("enter the string:");
    scanf("%[^\n]c",dest5);
    bflush();
    printf("enter the char:");
    scanf("%c",&ch);
    printf("Token:%s",stringToken(dest5,ch));

    // strchr 
    char dest6[100],ch;
    bflush();
    printf("enter the string:");
    scanf("%[^\n]c",dest6);
    bflush();
    printf("enter the char:");
    scanf("%c",&ch);
    printf("strchr:%s",stringChar(dest6,ch));
    
    // strcat
    char dest7[100],src7[100];
    bflush();
    printf("enter the string1:");
    scanf("%[^\n]c",dest7);
    bflush();
    printf("enter the string2:");
    scanf("%[^\n]c",src7);
    printf("string concat:%s",stringConcat(dest7,src7));

    return 0;

}
