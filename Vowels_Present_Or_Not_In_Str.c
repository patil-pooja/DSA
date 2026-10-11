#include <stdio.h>
char stack[50];
int top = -1;
void main()
{
    char str[50];
    int i,count = 0;
    printf("Enter a String : ");
    gets(str);

    /*Push Characters into Stack*/
    for(i = 0; str[i] != '\0'; i++)
    {
        stack[++top] = str[i];
    }

    /*POP and Check Vowels*/
    while(top != -1)
    {
        char ch = stack[top--];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    printf("Total number of vowels : %d ",count);
}