#include "node.cpp"

class C_Queue{
	
	private:
	Node *last;
	int size;

	public:
	C_Queue();
	~C_Queue();

	void set_size(int num);
	int get_size();
	bool is_empty();
	bool is_full();
	int occupied_size();
	void push(int element);
	int front();
	void print();
};
