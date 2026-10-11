#include <stdio.h>
char stack[20];
int top = -1;
void main()
{
    char exp[20];
    int i;
    printf("Enter Expressin : ");
    gets(exp);
    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
        {
            stack[++top] = '('; 
        }
        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                printf("\nInvalid Expression");
                return;
            }
            top--;
        }
    }
    if(top == -1)
    {
        printf("Valid Expression");
    }
    else
    {
        printf("Invalid Expression");
    }
}