#include <stdio.h>
#include <string.h>
char stack[50];
int top = -1;
void main()
{
    char str[50];
    int i, flag = 1;
    printf("Enter a string : ");
    gets(str);

    /*Push Character into stack*/
    for(i = 0; str[i] != '\0'; i++)
    {
        stack[++top] = str[i];
    }

    /*Compare While Popping*/
    for(i = 0; str[i] != '\0'; i++)
    {
        if(stack[top--] != str[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}