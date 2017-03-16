#include <iostream>
#include <string>
#include "stack.hpp"

int main(int argc, char* argv[])
{
    const size_t size = 20;
    Stack myStack(size);
    

    myStack.push("dank1");
    std::cout << myStack.pop() << "\n";
    myStack.push("dank2");
    myStack.push("dank3");
    myStack.push("dank1");
    myStack.push("dank2");
    myStack.push("dank3");
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";

    const char* swag = "swag1";
    myStack.push(swag);
    std::string swag2 = "swag2";
    myStack.push(swag2);    
    swag = "swag3";
    myStack.push(swag);

    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";
    std::cout << myStack.pop() << "\n";    

}
