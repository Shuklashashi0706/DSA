// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 5
// int front = -1, rear = -1;
// int qu[MAX];
// void push();
// void pop();
// void display();
// int main()
// {
//     int ch;
//     do
//     {
//         printf("1)push\t2)pop\t3)display\t4)exit\n");
//         printf("Enter your choice:\n");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             exit(0);
//             break;
//         default:
//             printf("Default character entered\n");
//         }
//     } while (ch != 4);
//     return 0;
// }
// void push()
// {
//     int val;
//     printf("Enter value:\n");
//     scanf("%d", &val);
//     if (front == 0 && rear == MAX - 1)
//     {
//         printf("Overflow\n");
//     }
//     else if(front==-1 && rear == -1){
//         front=rear=0;
//     }
//     else if (front != 0 && rear == MAX - 1)
//     {
//         rear = 0;
//         qu[rear] = val;
//     }
//     else
//     {
//         rear++;
//         qu[rear] = val;
//     }
// }
// void pop()
// {
//     int val;
//     val = qu[front];
//     if (front == -1 && rear == -1)
//     {
//         printf("Underflow\n");
//     }
//     else if (front == rear)
//     {
//         front = rear = -1;
//     }
//     else
//     {
//         if (front == MAX - 1) // for a situation when front!=0 and rear is then set to 0 ,thus to remove elements from 0th position
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//     }
// }
// void display()
// {
//     int i;
//     if (front = -1 && rear == -1)
//     {
//         printf("Empty\n");
//     }
//     else
//     {
//         if (front < rear)
//         {
//             printf("-----Queue-----\n");
//             for (i = front; i <= rear; i++)
//             {
//                 printf("%d\n", qu[i]);
//             }
//             printf("-----Queue-----\n");
//         }
//         else
//         {
//             printf("-----Queue-----\n");

//             for (i = front; i < MAX; i++)
//             {
//                 printf("%d\n", qu[i]);
//             }
//             for (i = 0; i <= rear; i++)
//             {
//                 printf("%d\n", qu[i]);
//             }
//             printf("-----Queue-----\n");
//         }
//     }
// }
// Circular Queue implementation in C

#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}

// Check if the queue is empty
int isEmpty() {
  if (front == -1) return 1;
  return 0;
}

// Adding an element
void enQueue(int element) {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
int deQueue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = items[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main() {
  // Fails because front = -1
  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  enQueue(6);

  display();
  deQueue();

  display();

  enQueue(7);
  display();

  // Fails to enqueue because front == rear + 1
  enQueue(8);

  return 0;
}