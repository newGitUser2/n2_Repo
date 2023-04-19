#include <iostream>
#include "queue.hpp"

int main(){

        C_Queue q;
        q.push(25);
        q.push(13);
        q.push(42);
        q.print();
        std::cout << '\n';
        std::cout << "From method <front> " << q.front();
        std::cout << '\n';
        std::cout << "Size is: " << q.get_size() << '\n';
        std::cout << "Occupied size: " << q.occupied_size();
        std::cout << '\n';
        if(q.is_empty())
                std::cout << "The queue is empty\n";
        else
                std::cout << "The queue is not empty\n";

        if(q.is_full())
                std::cout << "The queue is full\n";
        std::cout << q.front() << '\n';
        return 0;
}

