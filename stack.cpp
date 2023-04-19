#include <iostream>
#include "stack.hpp"

C_Stack::C_Stack(){
	head = nullptr;
	size = 0;
}

C_Stack::~C_Stack(){
	Node *tmp_head = head;
        for(int i = 0; i < size; i++){
       		if(head){
                	tmp_head = head->next;
                        delete head;
                        head = tmp_head;
              	}
     	}
}

int C_Stack::occupied_size(){
	Node *node = head;
        int o_size = 0;
        for(int i = 0; i < size; i++){
      		if(node){
               		o_size++;
                        node = node->next;
             	}
    	}
     	return o_size;

}

bool C_Stack::is_empty(){
	return head == nullptr;
}

bool C_Stack::is_full(){
	return occupied_size() == size;
}

void C_Stack::set_size(int num){
	size = num;
}

int C_Stack::get_size(){
	return size;
}

void C_Stack::push(int element){
	Node *new_node = new Node(element);
        if(size == 0){
        	head = new_node;
                head->next = nullptr;
       	}
        else{
       		Node *tmp = head;
                head = new_node;
                new_node->next = tmp;
     	}
	size++;
}

int C_Stack::top(){
	return head->data;
}

void C_Stack::pop(){
	Node *node = head->next;
        delete head;
        size--;
        head = node;
}

void C_Stack::print(){
	Node *node = head;
        while(node != nullptr){
        	std::cout << node->data << " ";
                node = node->next;
      	}
}


