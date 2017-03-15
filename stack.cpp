#include "stack.hpp"

Stack::Stack(size_t size) 
{
    mTop = 0;
    mStack = (char**)malloc(sizeof(char*)*size);
    mSize = size;
}

int Stack::push(std::string value)
{
    if(mTop == mSize) 
    {
        mSize = mSize*2;
        mStack = (char**)realloc(mStack, sizeof(char*)*mSize);
        if(mStack == NULL)
        {
            return -1;
        }
        mStack[mTop] = value;
        mTop++;
        return 0;
    }
    else
    {
        mStack[mTop] = value;
        mTop++;
        return 0;
    }
}

std::string Stack::pop()
{
    std::string ret;
    if(mTop == 0)
    {
        return NULL;
    }
    
    if(mTop < mSize/2)
    {
        mSize = mSize/2;
        mStack = (char**)realloc(mStack, sizeof(char*)*mSize);
        if(mStack == NULL)
        {
            return "";
        }
    }

    ret = mStack[mTop-1];
    mStack[mTop-1] = NULL;
    mTop++;
    return ret;
}

size_t Stack::size()
{
    return sizeof(mStack)/sizeof(*mStack);
}
