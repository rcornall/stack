#include "stack.hpp"
#include <iostream>
#include <string.h>
#include <cstring>
const static int S_LEN = 64;
Stack::Stack(size_t size) 
{
    mTop = 0;
    mStack = (char**)malloc(sizeof(char*)*size);
    if(!mStack)
    {
        std::bad_alloc b;
        throw b;
    }
    char* mem;
    for(size_t i = 0; i<size; i++)
    {
       mStack[i] = (char*)malloc(S_LEN*sizeof(char)); 
       if(!mStack[i])
       {
          std::bad_alloc b;
          throw b;
       }
    }
    mSize = size;
}

int Stack::push(const std::string& value)
{
    //char *str = (char*)malloc(sizeof(char*));
    //if(str)
    //{
    //    strncpy(str, value.c_str(),value.size());
    //}
    //else
    //{
    //    return -1;
    //}

    if(mTop == mSize) 
    {
        mSize = mSize*2;
        mStack = (char**)realloc(mStack, sizeof(char*)*mSize);
        if(mStack == NULL)
        {
            return -1;
        }
        strncpy(mStack[mTop], value.c_str(), value.size());
        mTop++;
        return 0;
    }
    else
    {
        strncpy(mStack[mTop], value.c_str(), value.size());
        mTop++;
        return 0;
    }
}
// int Stack::push(const char* value)
// {
//     if(mTop == mSize) 
//     {
//         mSize = mSize*2;
//         mStack = (const char**)realloc(mStack, sizeof(char*)*mSize);
//         if(mStack == NULL)
//         {
//             return -1;
//         }
//         mStack[mTop] = value;
//         mTop++;
//         return 0;
//     }
//     else
//     {
//         mStack[mTop] = value;
//         mTop++;
//         return 0;
//     }
// }
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
    mTop--;
    return ret;
}

size_t Stack::size()
{
    return sizeof(mStack)/sizeof(*mStack);
}
