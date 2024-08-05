#define   _CRT_SECURE_NO_WARNINGS

#include "List.h"



LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

LTNode* BuyListNode(LTDateType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushBack(LTNode* phead, LTDateType x)
{
	assert(phead);
	/*LTNode* tail = phead->prev;
	LTNode* newnode = BuyListNode(x);


	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;*/

	ListInsert(phead, x);
}


void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	/*LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	free(tail);

	phead->prev = tailprev;
	tailprev->next = phead;*/

	ListErase(phead->prev);

}


void ListPushFront(LTNode* phead, LTDateType x)
{
	assert(phead);
	/*LTNode* newnode = BuyListNode(x);
	LTNode* next = phead->next;
	
	phead->next = newnode;
	newnode->next = next;

	newnode->prev = phead;
	next->prev = newnode;*/

	ListInsert(phead->next, x);
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	/*LTNode* next = phead->next;
	LTNode* nextNext = next->next;
	nextNext->prev = phead;
	phead->next = nextNext;
	free(next);*/

	ListErase(phead->next);
}

LTNode* ListFind(LTNode* phead, LTDateType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data = x)
			return cur;
		cur = cur->next;

	}
	printf("\n");
}

void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);
	
	posPrev->next = newnode;
	newnode->next = pos;
	newnode->prev = posPrev;
	pos->prev = newnode;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* next = pos->next;
	LTNode* prev = pos->prev;

	prev->next = next;
	next->prev = prev;
	free(pos);

}
