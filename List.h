#pragma once
#include <cstddef>
template<typename T>
class list {
#include"DNode.h"
public:
	list():head(NULL),tail(NULL),numItems(0) {}
	void push_front(const T& val);
	void push_back(const T& val);
private:
	DNode* head;
	DNode* tail;

	size_t numItems;
};
template<typename T>
void list<T>::push_front(const T& val) {
	head = new DNode(val, head, NULL);
	if (head->next != NULL)
		head->next->prev = head;
	if (tail == NULL)
		tail = head;
	numItems++;
}
template<typename T>
void list<T>::push_back(const T& val) {
	if (tail != NULL) {
		tail->next = new DNode(val, NULL, tail);
		tail = tail->next;
		numItems++;
	}
	else {
		push_front(val);
	}
}
