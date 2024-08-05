#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int LTDateType;

typedef struct ListNode
{
	LTDateType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;
//��ʼ��
LTNode* ListInit();
//ͷ�ڵ�
LTNode* BuyListNode(LTDateType x);
//��ӡ
void ListPrint(LTNode* phead);
//β��
void ListPushBack(LTNode* phead , LTDateType x);
//ͷ��
void ListPopBack(LTNode* phead);
//βɾ
void ListPushFront(LTNode* phead, LTDateType x);
//ͷɾ
void ListPopFront(LTNode* phead);
//���������ص�ַ
LTNode* ListFind(LTNode* phead, LTDateType x);
//��posǰ���Ԫ��
void ListInsert(LTNode* pos, LTDateType x);
//ɾ��posλ�õ�Ԫ��
void ListErase(LTNode* pos);