#include "node.cpp"

class C_Stack{

	private:
	Node *head;
	int size;

	public:
	C_Stack();
	~C_Stack();

	int occupied_size();
	bool is_empty();
	bool is_full();
	void set_size(int num);
	int get_size();
	void push(int element);
	int top();
	void pop();
	void print();
};
