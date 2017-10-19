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
