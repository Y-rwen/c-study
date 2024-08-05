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
//初始化
LTNode* ListInit();
//头节点
LTNode* BuyListNode(LTDateType x);
//打印
void ListPrint(LTNode* phead);
//尾插
void ListPushBack(LTNode* phead , LTDateType x);
//头插
void ListPopBack(LTNode* phead);
//尾删
void ListPushFront(LTNode* phead, LTDateType x);
//头删
void ListPopFront(LTNode* phead);
//搜索并返回地址
LTNode* ListFind(LTNode* phead, LTDateType x);
//在pos前添加元素
void ListInsert(LTNode* pos, LTDateType x);
//删除pos位置的元素
void ListErase(LTNode* pos);