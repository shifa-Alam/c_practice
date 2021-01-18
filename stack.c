#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("SuccessFully Added item : %d \n", x);
    }
    else
    {
        printf("Exception! No Spaces\n");
    }
}
int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top = top - 1;
        return val;
    }
    printf("Execption from pop! Empty Stack \n");

    return -1;
}
int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("Exception from peek! Empy Stack\n");
    return -1;
}
int main()
{
    printf("Implementing My stcak in C\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop item: %d\n", pop());
    push(40);
    printf("Top of Stcak: %d", peek());
    return 0;
}