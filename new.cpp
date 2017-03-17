#include <iostream>
#include <string>
#include "stack.hpp"

int main(int argc, char* argv[])
{
    const size_t size = 20;
    Stack myStack(size);
    
    std::cout << myStack.size() << std::endl;

    myStack.push("dank1");
    std::cout << myStack.pop() << "\n";
    myStack.push("dank2");
    std::cout << myStack.size() << std::endl;
    myStack.push("dank3");
    myStack.push("dank1");
    myStack.push("dank2");
    myStack.push("dank3");
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.size() << std::endl;

    const char* swag = "swag1";
    myStack.push(swag);
    std::string swag2 = "swag2";
    myStack.push(swag2);    
    swag = "swag3";
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);

    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    myStack.push(swag);
    std::cout << myStack.size() << std::endl;
    myStack.push(swag);
    myStack.push(swag);
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";    

    std::cout << myStack.size() << std::endl;


    Stack* newStack = new Stack(size);
    newStack->push(swag);
    newStack->pop();

    newStack->push(swag);
    newStack->push(swag);
    newStack->push(swag);
    delete newStack;
    newStack = NULL;
    return 0;

}
