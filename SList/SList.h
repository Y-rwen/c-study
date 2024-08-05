#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLTDataType;

struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;
//��ӡ
void SListPrint(SLTNode* phead);
//β��
void SListPushBack(SLTNode** pphead, SLTDataType x);
//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x);
//βɾ
void SlistPopBack(SLTNode** pphead);
//ͷɾ
void SListPopFront(SLTNode** pphead);
//���������ص�ַ
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//��posǰ���Ԫ��
void SListInsert(SLTNode** pphead,SLTNode* pos, SLTDataType x);
//ɾ��posλ�õ�Ԫ��
void SListErase(SLTNode** pphead, SLTNode* pos);
