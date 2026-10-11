#include <stdio.h>
#define max 5
int stack[max];
int top = -1;
void push();
void pop();
void disp();
void main()
{
    int ch;
    do{
        printf("\n1:Push \n2:POP \n3:Display \n4:Exit \nEnter a Number to Perform a operation : ");
        scanf("\n%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:disp();
            break;
            default:printf("------Wrong Choice....!-----");
            break;
        }
    }while(ch != 4);
}

void push()
{
    int ele;
    if(top == max-1){
        printf("\nStack is Full");
    }else{
        printf("\nEnter element to insert in the stack : ");
        scanf("\n%d",&ele);
        top++;
        stack[top] = ele;
    }
}

void pop()
{
    if(top == -1){
        printf("\nStack is Empty");
    }else{
        printf("\nThe removed element is : %d",stack[top]);
        top--;
    }
}

void disp()
{
    if(top == -1){
        printf("\nStack is Empty");
    }else{
        for(int i = top; i >= 0; i--){
            printf("\n%d",stack[i]);
        }
    }

}