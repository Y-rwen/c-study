#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Array
{
	size_t size;
	size_t len;
	size_t typeSize;
	//值复制函数
	void(*dup)(void* ptr, void* key);
	//释放
	void(*free)(void* ptr);
	//比较
	int(*match)(void* ptr, void* key);

	void* p;
}Array;

#define arraySetDupMethod(a,m)((a)->dup = (m))
#define arraySetDupMethod(a,m)((a)->free = (m))
#define arraySetDupMethod(a,m)((a)->match = (m))

#define arrayGetDupMethod(a)((a)->dup)
#define arrayGetDupMethod(a)((a)->free)
#define arrayGetDupMethod(a)((a)->match)

Array* arrayCreate();
void arrayInit(Array* array, int size, int typeSize);

int arrayInsert(Array* array,size_t pos,void* const value);
size_t arraySearchValue(Array* array,void* const value);
void* arrayIndex(Array* array, size_t index);
int arrayModify(Array* array, size_t pos, void* const value);


size_t arraylen(Array* array);
size_t arraySize(Array* array);


void arrayEmpty(Array* array);
void arrayDelValue(Array* array, void* value);
void arrayDelIndex(Array* array, size_t pos);


