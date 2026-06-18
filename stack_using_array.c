//Stack using array 
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top = -1;


void isempty()
{
    
    
}

void push()
{
    int value;
    if(top==MAX-1)//isfull?
    {
        printf("Stack overflow!\n");
        return;
    }
    printf("Enter the value to push : ");
    scanf("%d",&value);
    stack[++top]=value;
    printf("pushed %d! \n",value);
}

void pop()
{
    if(top==-1)//isempty?
    {
        printf("Stack underflow!\n");
        return ;
    }
    printf("Popped -> %d",stack[top--]);
}

void peek()
{
    if(top==-1)//isempty?
    {
        printf("Stack underflow!\n");
        return ;
    }
    printf("Top->%d",stack[top]);
    
}


    void display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }

int main() {
    int choice;

    while (1) {
        printf("\n*** STACK OPERATIONS MENU ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program. Code clean!\n");
                exit(0); // Terminates the infinite loop cleanly
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}