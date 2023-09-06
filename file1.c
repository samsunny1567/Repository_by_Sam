#include<stdio.h>

int operation (int x,int y,int (*functioncall)(int,int));
int addition(int x,int y);
int subtraction(int x,int y);
int multiplication(int x, int y);
int division(int x,int y);
int power(int,int);

int main()
{
    int x,y,select;
    int result=0;
    printf("hello world :)")
    printf("Presenting my calculator created by Samunni :) \n");
    printf("enter 1 for addition , 2 for subtraction 3 for multiplication 4 for division\n 5 for power:  ");
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
         case 3:
         result=operation(x,y,multiplication);
         printf("Result = %d",result);
         break;
         case 4:
         result=operation(x,y,division);
         printf("Result = %d",result);  
         break;
         case 5:
         result=operation(x,y,power);
         printf("Result = %u",result);

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
int multiplication(int x,int y)
{
    return x*y;
}
int division(int x,int y)
{
    return x/y;
}
int power(int x,int y)
{
    int result=1;
    for(int i=0;i<y;i++)
    {
        result=x*result;
    }
    return result;
}