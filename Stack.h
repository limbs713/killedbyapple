#ifndef _STACK_
#define _STACK_
#include "LinkedList.h"
using namespace std;

template<class T>
class Stack : public LinkedList<T>
{
	public:
		bool Delete(T &element);
};
template<class T>
bool Stack<T>::Delete(T&element)
	{
	if(this->first == NULL)
		{
			return false;
		}	
	Node<T> *current = this->first;
	this->first = current->link;
	element = current->data;
	delete current;
	this->current_size--;
	return true;
}
#endif
