#include <stdio.h>
#define CAPACITY 5
int ourQueue[CAPACITY];
int front = 0;
int rear = 0;
void enQueue(int item)
{
    if (CAPACITY == rear)
    {
        printf("Sorry! Queue is Full\n");
    }
    else
    {
        ourQueue[rear] = item;
        rear++;
    }
}
int deQueue()
{
    if (front == rear)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("deleted item is %d\n", ourQueue[front]);
        for (int i = 0; i < rear - 1; i++)
        {
            ourQueue[i] = ourQueue[i + 1];
        }
        rear--;
    }

    return 0;
}
void display()
{
    if (front == rear)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("Queue is : ");
        for (int i = front; i < rear; i++)
        {
            printf("%d,", ourQueue[i]);
        }
        printf("\n");
    }
}
int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    display();
    deQueue();
    enQueue(60);

    display();
}