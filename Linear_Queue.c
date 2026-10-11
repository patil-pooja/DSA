#include <stdio.h>
#define max 5
int r = 0, f = 0;
int q[max];
void enq();
void deq();
void display();
void main()
{
    int ch;
    do
    {
        printf("\n1: Insert(enqueue) \n2: Delete(dequeue) \n3: Display \n4: exit \nEnter a number to perform operation : ");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:display();
            break;
            default:printf("\n------Wrong Choice !------");
            break;
        }
    }while(ch != 4);
}

void enq()
{
    int ele;
    if(r == max)
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("Enter element to insert in the queue : ");
        scanf("\n%d",&ele);
        q[r] = ele;
        r++;
    }
}

void deq()
{
    if(r == f || r == 0 && f == 0)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("The removed element is : %d",q[f]);
        f++;
    }
}

void display()
{
    int i;
    if(r == f || r == 0 && f == 0)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i = f; i < r; i++)
        {
            printf("%d",q[i]);
        }
    }
}