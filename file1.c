#include<stdio.h>

int operation (int x,int y,int (*functioncall)(int,int));
int addition(int x,int y);
int subtraction(int x,int y);

int main()
{
    int x,y,result=0,select;
    printf("enter 1 for addition , 2 for subtraction :  ");
    scanf("%d",&select);
    printf("enter first number: ");
    scanf("%d",&x);
    printf("enter second number :");
    scanf("%d",&y);
    
    switch(select)
    {
        case 1:
        result=operation(x,y,addition);
        printf("Result = %d",result);
        break;
        case 2:
         result=operation(x,y,subtraction);
         printf("Result = %d",result);
         break;
    }

    return 0;
}

int operation (int x,int y,int (*functioncall)(int,int))
{
    int var=(*functioncall)(x,y);
    return var;
}
int addition(int x,int y)
{
    return x+y;
}
int subtraction(int x,int y)
{
    return x-y;
}