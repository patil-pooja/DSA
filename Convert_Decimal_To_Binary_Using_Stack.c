#include <stdio.h>
int stack[20];
int top = -1;

/*Push Function*/
void push(int x)
{
    top++;
    stack[top] = x;
}

/*POP Function*/
int pop()
{
    int x;
    x = stack[top];
    top--;
    return x;
}

void main()
{
    int n, rem;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    while(n > 0)
    {
        rem = n % 2;
        push(rem);
        n = n / 2;
    }
    printf("Binary equivalent : ");
    while(top != -1)
    {
        printf("%d",pop());
    }
}