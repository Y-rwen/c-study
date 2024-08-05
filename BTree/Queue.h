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
//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestory(Queue* pq);
//��β��
void QueuePush(Queue* pq, QDataType x);
//��ͷ��
void QueuePop(Queue* pq);
//��ȡͷ��Ԫ��
QDataType QueueFront(Queue* pq);
//��ȡβ��Ԫ��
QDataType QueueBack(Queue* pq);
//��ЧԪ�ظ���
int QueueSize(Queue* pq);
//�пգ�Ϊ�շ��ط�0���ǿշ���0
bool QueueEmpty(Queue* pq);