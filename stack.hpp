#include <string>
#include <iostream>


class Stack {

    private:
        int mTop;
        char *mStack[];
        size_t mSize;

        size_t size();
    public:
        Stack(size_t size);


        int push(const std::string& value);
        std::string pop();
};
