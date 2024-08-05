#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Stack.h"


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}

}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[begin], &a[end]);
		if (begin == maxi)
			maxi = mini;
		Swap(&a[maxi], &a[mini]);
		++begin;
		--end;
	}
}

void AdjustDwon(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child += 1;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	for (int i = (n-1-1); i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		--end;
	}
}

void BubbleSort(int* a, int n)
{
	int exchange = 0;
	for (int j = 1; j < n; j++)
	{
		for (int i = 0; i < n - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[left] > a[mid])
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] < a[right])
			return left;
		else
			return right;
	}
	else
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[left] > a[right])
			return left;
		else
			return right;
	}
}

int PartSort1(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);
	int begin = left, end = right;
	int pivot = begin;
	int key = a[begin];

	while (begin < end)
	{
		while (begin < end && a[end] >= key)
			end--;
		a[pivot] = a[end];
		pivot = end;
		while(begin < end && a[begin] <= key)
			begin++;
		a[pivot] = a[begin];
		pivot = begin;
	}
	pivot = begin;
	a[pivot] = key;
	return pivot;
}

int PartSort2(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);
	int begin = left, end = left;
	int keyi = left;
	while (begin < end)
	{
		while (begin < end && a[begin] < a[keyi])
			++begin;
		while (begin < end && a[end] > a[keyi])
			--end;
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyi]);
	return begin;
}

int PartSort3(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[left], &a[index]);
	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		++cur;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	int KeyIndex = PartSort1(a, left, right);

	if (KeyIndex - 1 - left > 10)
	{
		QuickSort(a, left, KeyIndex - 1);
	}
	else
	{
		InsertSort(a+left,KeyIndex - 1 - left + 1);
	}
	if (right - KeyIndex - 1 > 10)
	{
		QuickSort(a, KeyIndex + 1, right);
	}
	else
	{
		InsertSort(a + KeyIndex + 1, right - KeyIndex - 1 + 1);
	}

}

void QuickSortNonR(int* a, int n)
{
	ST st;
	StackInit(&st);
	StackPush(&st, n - 1);

	StackPush(&st, 0);

	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);

		int right = StackTop(&st);
		StackPop(&st);
		int KeyIndex = PartSort3(a, left, right);

		if (KeyIndex + 1 < right)
		{
			StackPush(&st, right);

			StackPush(&st, KeyIndex + 1);
		}
		if (left < KeyIndex - 1)
		{
			StackPush(&st, KeyIndex - 1);

			StackPush(&st, left);
		}
	}

	StackDestory(&st);
}

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = (left + right) >> 1;
	// 假设 [left, mid] [mid+1, right]	
	// 有序，那么我们就可以归并了	
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);
	// 归并	
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}		
	// 拷贝回去	
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}
}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap -1;
			int begin2 = i + gap, end2 = i + 2*gap - 1;
			if (begin2 >= n)
				break;
			if (end2 > n)
			{
				end2 = n - 1;
			}
			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}
			for (int j = i; j <= end2; ++j)
			{
				a[j] = tmp[j];
			}
		}
		gap *= 2;
	}
	free(tmp);
}
void TestQuickSort()
{
	int a[] = { 1,6,5,8,0,7,9,4,3,8,7,0,5,9,6,3,1 };
	QuickSort(a,0,sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}// 测试排序的性能对比
//void TestOP()
//{	
//	srand(time(0));	
//	const int N = 1000000;	
//	int* a1 = (int*)malloc(sizeof(int)*N);	
//	int* a2 = (int*)malloc(sizeof(int)*N);	
//	int* a3 = (int*)malloc(sizeof(int)*N);	
//	int* a4 = (int*)malloc(sizeof(int)*N);	
//	int* a5 = (int*)malloc(sizeof(int)*N);	
//	int* a6 = (int*)malloc(sizeof(int)*N);	
//	int* a7 = (int*)malloc(sizeof(int)*N);	
//	for (int i = 0; i < N; ++i)	
//	{		
//		a1[i] = rand();		
//		a1[i] = i;		
//		a2[i] = a1[i];		
//		a3[i] = a1[i];		
//		a4[i] = a1[i];		
//		a5[i] = a1[i];		
//		a6[i] = a1[i];		
//		a7[i] = a1[i];	
//	 }	
//	int begin1 = clock();
//  InsertSort(a1, N);	
//  int end1 = clock();	
//  int begin2 = clock();	
//  ShellSort(a2, N);	
//  int end2 = clock();	
	// int begin3 = clock();	
	// //SelectSort(a3, N);	
	// int end3 = clock();	
	// int begin4 = clock();	
	// HeapSort(a4, N);	
	// int end4 = clock();	
	// int begin5 = clock();	
	// QuickSort(a5, 0, N - 1);	
	// //QuickSort(a4, 0, N - 1);	
	// int end5 = clock();	
	// int begin6 = clock();	
	// //MergeSort(a6, N);	
	// int end6 = clock();	
	// int begin7 = clock();	
	// //BubbleSort(a7, N);	
	// //BubbleSort(a4, N);	
	// int end7 = clock();	
	// printf("InsertSort:%d\n", end1 - begin1);
	// printf("ShellSort:%d\n", end2 - begin2);	
	// printf("SelectSort:%d\n", end3 - begin3);	
	// printf("HeapSort:%d\n", end4 - begin4);	
	// printf("BubbleSort:%d\n", end7 - begin7);	
	// printf("QuickSort:%d\n", end5 - begin5);	/*
	// printf("MergeSort:%d\n", end6 - begin6);*/	
	// free(a1);	
	// free(a2);	
	// free(a3);	
	// free(a4);	
	// free(a5);	
	// free(a6);	
	// free(a7);
	// }
int main()
{
	//TestOP();
	//TestInsertSort();
	//TestShellSort();
	//TestHeapSort();
	//TestSelectSort();
	//TestBubbleSort();	
	TestQuickSort();
	//TestMergeSort();
	return 0;
}