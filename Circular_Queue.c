#include <stdio.h>
#define max 5
int q[max];
int f = 0, r = 0, count = 0;
void enq();
void deq();
void display();
void main()
{
    int ch;
    do
    {
        printf("\n1 : Insert(enqueue) \n2 : Delete(dequeue) \n3 : Display \n4 : Exit \nEnter a number to perform operation : ");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:display();
            break;
            default:printf("------Wrong Choice------");
            break;
        }
    } while (ch != 4);
}

void enq()
{
    int ele;
    if(count == max)
    {
        printf("\nQueue is Overflow / Full");
    }
    else
    {
        printf("\nEnter a element to insert in the queue :  ");
        scanf("\n%d",&ele);
        q[r] = ele;
        r = (r + 1) % max;
        count++;
    }
}

void deq()
{
    if(count == 0)
    {
        printf("\nQueue is underflow / Empty");
    }
    else
    {
        printf("\nThe removed element is : %d", q[f]);
        f = (f + 1) % max;
        count--;
    }
}

void display()
{
    int i;
    if(count == 0)
    {
        printf("\nQueue is Underflow / Empty");
    }
    else
    {
        for(i = f; i != r; i = (i + 1) % max)
        {
            printf("%d\t", q[i]);
        }
    }
}