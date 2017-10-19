#include<iostream>
#include "Stack.h"
using namespace std;

/*
- AddFirst
- AddLast
- RemoveFirst
- RemoveLast
- RemoveInfo
*/

int main()
{
	/*Node *n1 = new Node(5, nullptr);
	Node *n2 = new Node(10, n1);*/

	auto *list = new LinkedList<char*>();
	list->AddFirst("World");
	list->AddFirst("Hello");
	list->AddFirst("Something crazy");
	list->RemoveLast();
	list->RemoveFirst();
	list->DisplayList();
	//list->RemoveLast();
	//cout << list->Head->Info<< endl;

	auto stk = new Stack<int>();
	stk->Push(1);
	stk->Push(2);
	stk->Push(3);
	stk->Push(4);

	cout << stk->Factorial() << endl;
	cout << "Stack size: " << stk->m_Size << endl;

	getchar();
	return 0;
}