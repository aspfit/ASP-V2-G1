#pragma once

template <class T>
struct Node
{
public:
	T Info;
	Node<T> *Next;

	Node(T i, Node<T> *n);
};

template <class T>
Node<T>::Node(T i, Node<T> *n)
{
	this->Info = i;
	this->Next = n;
}