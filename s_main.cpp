#include <iostream>
#include "stack.hpp"

int main(){
        C_Stack s;
        s.set_size(4);
        std::cout << s.get_size() << '\n';
        if(s.is_empty())
                std::cout << "Is empty\n";
        else
                std::cout << "No empty\n";
        s.push(27);
        s.push(12);
        s.push(19);
        std::cout << s.top() << '\n';
        std::cout << "The elements of the stack are: ";
        s.print();
        std::cout << std::endl;
	std::cout << s.get_size() << '\n';
        std::cout << s.top() << '\n';
        s.pop();
        std::cout << "Elements of the stack after <pop>: ";
        s.print();
        std::cout << "Size is: " << s.get_size() << '\n';;
        std::cout << "Occupied size is: " << s.occupied_size() << '\n';
        if(s.is_full())
                std::cout << "Stack is full\n";
        else
                std::cout << "Stack is not full\n";

        return 0;
}


