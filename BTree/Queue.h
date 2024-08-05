#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

struct BinaryTreeNode;
typedef struct BinaryTreeNode* QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;
//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestory(Queue* pq);
//队尾入
void QueuePush(Queue* pq, QDataType x);
//队头出
void QueuePop(Queue* pq);
//获取头部元素
QDataType QueueFront(Queue* pq);
//获取尾部元素
QDataType QueueBack(Queue* pq);
//有效元素个数
int QueueSize(Queue* pq);
//判空，为空返回非0；非空返回0
bool QueueEmpty(Queue* pq);