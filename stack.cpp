#include <iostream>
using namespace std;

struct Stack
{
	int data;
	Stack* next;
};

Stack* create_node(int data)
{
	Stack* node = new Stack;
	node->data  = data;
	node->next  = NULL;
	return node;
}

void push(Stack*& head, int data)
{
	if(head == NULL)
	{
		head = create_node(data);
	}
	else
	{
		Stack* node = create_node(data);
		node->next  = head;
		head        = node;
	}
}

int pop(Stack*& head)
{
	int data        = head->data;
	Stack* new_head = head->next;
	delete head;
	head            = new_head;
	return data;
}

int main()
{
	int data;
	
	Stack* head = NULL;
	
	// TEST
	/**
	for(int i = 0; i < 5; i++)
	{
		cin >> data;
		push(head, data);
	}
	
	cout << " -- " << endl;
	
	while(head != NULL)
	{
		cout << pop(head) << endl;
	}
	**/
	
	//system("PAUSE"); // Uncomment for Windows
	return 0;
}
