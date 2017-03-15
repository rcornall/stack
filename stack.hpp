#include <string>
#include <stdlib.h>


class Stack {

    private:
        int mTop;
        const char **mStack;
        size_t mSize;

        size_t size();
    public:
        Stack(size_t size);


        int push(const std::string& value);
        int push(const char* value);
        std::string pop();
};
