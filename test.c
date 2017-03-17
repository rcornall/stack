#include <stdio.h>
#include "stack.h"

int main(int argc, char* argv[])
{
    const char* str = "swagger";
    MyStack mystack;
    stackInit(&mystack);

    stackPush(&mystack, "swag");
    stackPush(&mystack, "swag1");
    stackPush(&mystack, "swag2");
    stackPush(&mystack, (char*) str);
    
    str = "newswag";

    stackPush(&mystack, (char*)str);
    //MyStack* myStack = NewStack();
    printf("%s",stackPop(&mystack));
    printf("%s",stackPop(&mystack));
    printf("%s",stackPop(&mystack));
    // myStack->top = 0;
    return 0;
}
