// stack by rob

#include <string.h>
#include <stdlib.h>

#define  MAX_SIZE  256 

struct Stack
{
    char* stack[MAX_SIZE];
    int top;

    //char* (*pop)(struct Stack*);
    //int (*push)(struct Stack*, char* );
};
typedef struct Stack MyStack;

char* stackPop(MyStack* this);
int stackPush(MyStack* this, char* string);

MyStack* NewStack()
{
    MyStack* pStack = (MyStack*)malloc(sizeof(MyStack));
    pStack->top = -1;
    //pStack->pop = &stackPop;
    //pStack->push = &stackPush;
    return pStack; 
}


char* stackPop(MyStack* this)
{
    if (this->top == -1)
    {
        return NULL;
    }

    char* ret = this->stack[this->top];
    this->top = this->top - 1; 
    return ret;
}

// push
// pushes a string to the top of the calling stack
// ret: 0 on suc, -1 on fail
int stackPush(MyStack* this, char* string)
{
    if (string == NULL)
    {
        return -1;
    }
    else if (strlen(string) == 0)
    {
        return -1;
    }
    if (this->top == MAX_SIZE-1)
    {
        // could add resizing with malloc here
        return -2;
    }

    this->top = this->top + 1;
    this->stack[this->top] = string;
    return 0;
}
    
