#pragma once
struct DNode{
	T dato;
	DNode* next;
	DNode* prev;
	DNode(const T& val,DNode* pNext = NULL, DNode* pPrev= NULL):
	dato(val),next(pNext),prev(pPrev){}

};//pag260