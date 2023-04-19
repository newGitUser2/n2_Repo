#include <iostream>
#include "queue.hpp"

C_Queue::C_Queue(){
	last = nullptr;
	size = 0;
}

C_Queue::~C_Queue(){
	Node *tmp_last = last;
        for(int i = 0; i < get_size(); i++){
       		if(tmp_last){
                	tmp_last = last->next;
                        delete last;
                        last = tmp_last;
               	}
     	}
}	

void C_Queue::set_size(int num){
	size = num;
}

int C_Queue::get_size(){
	return size;
}

bool C_Queue::is_empty(){
	return last == nullptr;
}

bool C_Queue::is_full(){ //Queue full or not
	if(get_size() == occupied_size())
       		return true;
}

int C_Queue::occupied_size(){
	Node *node = last;
        int o_size = 0;
        for(int i = 0; i < get_size(); i++){
       		if(node){
                	o_size++;
                        node = node->next;
              	}
     	}
       	return o_size;
}

void C_Queue::push(int element){
	Node *node = new Node(element);
        if(last == nullptr){
        	last = node;
                last->next = nullptr;
      	}
        else{
       		Node *tmp = last;
                last = node;
                node->next = tmp;
     	}
        size++;
}

int C_Queue::front(){
	Node *node = last;
        while(node){
       		if(node->next == nullptr)
                	return node->data;
               	else
                	node = node->next;
     	}
}

/* в методе <pop()> Node* был удален, но его место остается пустым,
 * в результате чего получаем <Segmentation fault>

        void pop(){
                Node *node = last;
                while(node){
                        if(node->next == nullptr){
                                delete node;
                                size--;
                        }
                        else node = node->next;
                }
        }
*/

void C_Queue::print(){
	Node *node = last;
        while(node){
       		std::cout << node->data << " ";
              	node = node->next;
      	}
}
