#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front = -1, rear = -1;
int qu[MAX];
void push();
void pop();
void display();
int main()
{
    int ch;
    do
    {
        printf("1)push\t2)pop\t3)display\t4)exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Default character entered\n");
        }
    } while (ch != 4);
    return 0;
}
void push()
{
    int val;
    printf("Enter value to be added:\n");
    scanf("%d", &val);
    if (rear == MAX - 1)
    {
        printf("Oveflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        qu[rear] = val;
    }
    else
    {
        rear++;
        qu[rear] = val;
    }
}
void pop()
{
    int val;
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        val = qu[front];
        front++;
        printf("%d popped\n", val);
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Empty\n");
    }
    else if (front == rear)
    {
        printf("Single element:%d\n", qu[front]);
    }
    else
    {
        printf("----Queue elements---\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", qu[i]);
        }
        printf("----Queue elements---\n");
    }
}
