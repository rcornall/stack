#include "stack.hpp"
#include <string.h>

Stack::Stack(size_t size) 
{
    mTop = 0;
    mStack = (const char**)malloc(sizeof(char*)*size);
    mSize = size;
}

int Stack::push(const std::string& value)
{
    if(mTop == mSize) 
    {
        mSize = mSize*2;
        mStack = (const char**)realloc(mStack, sizeof(char*)*mSize);
        if(mStack == NULL)
        {
            return -1;
        }
        mStack[mTop] = value.c_str();
        mTop++;
        return 0;
    }
    else
    {
        mStack[mTop] = value.c_str();
        mTop++;
        return 0;
    }
}
int Stack::push(const char* value)
{
    if(mTop == mSize) 
    {
        mSize = mSize*2;
        mStack = (const char**)realloc(mStack, sizeof(char*)*mSize);
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
        mStack = (const char**)realloc(mStack, sizeof(char*)*mSize);
        if(mStack == NULL)
        {
            return "";
        }
    }

    ret = mStack[mTop-1];
    mStack[mTop-1] = NULL;
    mTop--;
    return ret;
}

size_t Stack::size()
{
    return sizeof(mStack)/sizeof(*mStack);
}
