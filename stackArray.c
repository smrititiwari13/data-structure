#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push()
{
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        printf("enter value\n");
        scanf("%d",&stack[top]);
    }
}
void pop()
{
    if(top==-1)
    printf("stack under flow");
    else{
        printf("deleting...%d",stack[top]);
        top--;
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n1...push");
        printf("\n2....pop");
        printf("\n3...exit");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:pop();break;
            default:printf("thanks");
            exit(0);
        }
    }
}
