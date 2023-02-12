#include<stdio.h>

void callByValue(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("inside the fun(call by value)\n");
    printf("x1:%d and x2:%d \n",a,b);
}

void callByRef(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("inside the fun(call by ref)\n");
    printf("x1:%d and x2:%d \n",*a,*b);
}

int main()
{
    int x1,x2;
    printf("enter value x1 and x2 \n");
    scanf("%d %d",&x1,&x2);
    callByValue(x1,x2);
    printf("in the main fun() x1:%d and x2:%d \n",x1,x2);


    int y1,y2;
    printf("\nenter value y1 and y2 \n");
    scanf("%d %d",&y1,&y2);
    callByRef(&y1,&y2);
    printf("in the main fun() y1:%d and y2:%d \n",y1,y2);

    return 0;
}

/*

output:

enter value x1 and x2 
100 300
inside the fun(call by value)
x1:300 and x2:100
in the main fun() x1:100 and x2:300

enter value y1 and y2
100 300
inside the fun(call by ref)
x1:300 and x2:100
in the main fun() y1:300 and y2:100

*/
