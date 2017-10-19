#pragma once
#include "LinkedList.h"

template <class T>

struct Stack {
private:
	LinkedList<T> * stkList;
public:
	int m_Size = 0;
	Stack();
	void Push(T);
	T Pop();
	int Factorial();
};

template<class T>
Stack<T>::Stack(){
	stkList = new LinkedList<T>();
}

template<class T>
void Stack<T>::Push(T info){
	stkList->AddFirst(info);
	m_Size++;
}

template<class T>
T Stack<T>::Pop(){
	m_Size--;
	return stkList->RemoveStackFirst();
}

template<class T>
int Stack<T>::Factorial()
{
	int localVariable = 1;
	int fixedSize = m_Size;
	if (m_Size == 0)
		return 1;
	for (int i = 0; i < fixedSize; i++)
		localVariable *= this->Pop();
	return localVariable;
}
