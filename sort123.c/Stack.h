#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef char STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//��ʼ��
void StackInit(ST* ps);
//��ջ
void StackPush(ST* ps,STDataType x);
//��ջ
void StackPop(ST* ps);
//ջ��Ԫ��
STDataType StackTop(ST* ps);
//ջ����ЧԪ�صĸ���
int StackSize(ST* ps);
//����Ƿ�Ϊ���Ƿ���0 ���Ƿ��ط�0
bool StackEmpty(ST* ps);
//����
void StackDestory(ST* ps);

