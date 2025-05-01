#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{

    Stack stack;

    stack.push(10);

    stack.push(5);

    stack.push(6);

    std::cout << stack.top() << std::endl;

    stack.pop();

    std::cout << stack.top() << std::endl;

    std::cout << stack.size() << std::endl;



    stack.pop();


}

