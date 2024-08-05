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

//初始化
void StackInit(ST* ps);
//入栈
void StackPush(ST* ps,STDataType x);
//出栈
void StackPop(ST* ps);
//栈顶元素
STDataType StackTop(ST* ps);
//栈中有效元素的个数
int StackSize(ST* ps);
//检测是否为空是返回0 不是返回非0
bool StackEmpty(ST* ps);
//销毁
void StackDestory(ST* ps);

