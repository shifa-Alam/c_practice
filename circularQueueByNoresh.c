#include <stdio.h>
#define CAPACITY 5
int rear = -1, front = -1;
int cQueue[CAPACITY];
void insert(int item)
{
    if (CAPACITY == rear + 1)
    {
        printf("cQueue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        rear = 0;
        cQueue[rear] = item;
    }
    else if ()
    {
    }
    else
    {
        rear++;
        cQueue[rear] = item;
    }
}
void delete ()
{
    if (rear == -1 && front == -1)
    {
        printf("C queue is Empty!");
    }
}
int main()
{
    return 0;
}