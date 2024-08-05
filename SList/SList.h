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
//打印
void SListPrint(SLTNode* phead);
//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x);
//头插
void SListPushFront(SLTNode** pphead, SLTDataType x);
//尾删
void SlistPopBack(SLTNode** pphead);
//头删
void SListPopFront(SLTNode** pphead);
//搜索并返回地址
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//在pos前添加元素
void SListInsert(SLTNode** pphead,SLTNode* pos, SLTDataType x);
//删除pos位置的元素
void SListErase(SLTNode** pphead, SLTNode* pos);
