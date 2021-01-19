#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5
int ourQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;
bool isFUll()
{
    if (totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if (totalItem == 0)
    {
        return true;
    }
    return false;
}
void enQueue(int item)
{
    if (isFUll())
    {
        printf("Sorry!, The Queue is Full. \n");
        return;
    }
    else
    {
        rear = (rear + 1) % CAPACITY;
        ourQueue[rear] = item;
        totalItem++;
    }
}
int deQueue()
{
    if (isEmpty())
    {
        printf("Sorry! the queue is empty");
        return -1;
    }
    int frontItem = ourQueue[front];
    ourQueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}
void printQueue()
{
    int i = 0;
    printf("Queue: ");
    for (i = 0; i < CAPACITY; i++)
    {
        printf("%d,", ourQueue[i]);
    }
    printf("\n");
}
int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);

    enQueue(40);
    printQueue();
    enQueue(50);
    printQueue();
    enQueue(60);
    printf("dequeue Item: %d\n", deQueue());
    printQueue();
    enQueue(60);
    printQueue();
    return 0;
}