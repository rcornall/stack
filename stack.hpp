#include <string>
#include <stdlib.h>


class Stack {

    private:
        int mTop;
        char **mStack;
        size_t mSize;

    public:
        Stack(size_t size);


        int push(const std::string& value);
        int push(const char* value);
        std::string pop();

        // ret - size of stack in bytes
        size_t size();
};
