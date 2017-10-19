#pragma once
#include "Node.h"

template <class T>
struct LinkedList
{
public:
	Node<T> *Head;

	void AddFirst(T i);
	void RemoveLast();
	void RemoveFirst();
	void DisplayList();
	void RemoveInfo(T i);
	T RemoveStackFirst();
};

template<class T>
void LinkedList<T>::AddFirst(T i)
{
	auto *n = new Node<T>(i, Head);
	Head = n;
}

template<class T>
void LinkedList<T>::RemoveLast()
{
	Node<T> *tmp = this->Head;
	Node<T> *previousTmp = nullptr;
	while (tmp->Next != nullptr)
	{
		previousTmp = tmp;
		tmp = tmp->Next;
	}
	previousTmp->Next = nullptr;
	delete tmp;
}

template<class T>
void LinkedList<T>::RemoveFirst()
{
	Node<T> *tmp = Head;
	Head = Head->Next;
	delete tmp;
}

template<class T>
void LinkedList<T>::DisplayList()
{
	Node<T> *tmp = this->Head;
	while (tmp != nullptr)
	{
		std::cout << tmp->Info << endl;
		tmp = tmp->Next;
	}

}

template<class T>
void LinkedList<T>::RemoveInfo(T i)
{
	if (Head->Info == i)
	{
		RemoveFirst();
		return;
	}

	Node<T> *tmp = this->Head;
	Node<T> *previousTmp = nullptr;
	while (tmp->Info != i)
	{
		previousTmp = tmp;
		tmp = tmp->Next;
	}
	previousTmp->Next = tmp->Next;
	delete tmp;
}

template<class T>
T LinkedList<T>::RemoveStackFirst(){
	Node<T> *tmp = Head;
	auto info = tmp->Info;
	Head = Head->Next;
	delete tmp;
	return info;
}