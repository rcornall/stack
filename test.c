#include <stdio.h>
#include "stack.h"

int main(int argc, char* argv[])
{
    MyStack* myStack = NewStack();
    printf("%p",myStack);
    myStack->top = 0;
}
