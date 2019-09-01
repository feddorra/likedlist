#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class Stack
{
	private:
		Node* head;
	
	public:
		Stack()
		{
			head = NULL;
		}
		
		void push(int data)
		{
			Node* node = new Node;
			node->data = data;
			node->next = NULL;
			
			if(head == NULL)
			{
				head = node;
			}
			else
			{
				node->next = head;
				head       = node;
			}
		}
		
		int pop()
		{
			if(head == NULL)
			{
				exit(-1);
			}
			else
			{
				int data       = head->data;
				Node* tmp_head = head;
				head           = head->next;
				delete tmp_head;
				return data;
			}
		}
};

int main()
{
	
	Stack stack;
	stack.push(10);
	stack.push(20);
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	
	// system("PAUSE"); //Uncomment for Windows
	return 0;
}
