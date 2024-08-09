#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

void CountSort(int* a, int size)
{
	int i = 0;
	int max = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	int* count = (int*)malloc(sizeof(int) * (max + 1));
	assert(count != NULL);
	memset(count, 0, sizeof(int) * (max + 1));
	for (i = 0; i < size; i++)
	{
		count[a[i]]++;
	}
	for (i = 1; i <= max; i++)
	{
		count[i] += count[i - 1];
	}
	int* res = (int*)malloc(sizeof(int) * size);
	assert(res != NULL);
	for (i = size - 1; i >= 0; i--)
	{
		res[count[a[i]] - 1] = a[i];
		count[a[i]]--;
	}
	memcpy(a, res, size*sizeof(int));

	free(res);
	free(count);
}


void CountSortTest()
{
	int a[] = { 0,2,4,5,6,7,1,8,9,7,6 };
	int size = sizeof(a) / sizeof(int);
	CountSort(a, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}


#define NUM_OF_POS(a,pval) ((a) / pval) % 10
void RadixSort(int* a, int size, int num_size)
{
	int count[10];
	int* pres = (int*)malloc(sizeof(int) * size);
	int i = 0, j = 0;
	int pval = 10;
	int index = 0;
	int break_flg = 0;
	assert(pres != NULL);
	for (i = 0; i < num_size; i++)
	{
		memset(count, 0,sizeof(int) * 10);
		pval = pow(10, i);
		for (j = 0; j < size; j++)
		{
			index = NUM_OF_POS(a[j], pval);
			count[index]++;
		}
		if (count[0] == 9)
			break_flg++;
		if (break_flg >= 2)
		{
			printf("\r\n %i", i);
			break;
		}
		for (j = 1; j < 10; j++)
		{
			count[j] += count[j - 1];
		}
		for (j = size - 1; j >= 0; j--)
		{
			index = NUM_OF_POS(a[j], pval);
			pres[count[index] - 1] = a[j];
			count[index]--;
		}
		memcpy(a, pres, sizeof(int) * 10);
	}
	free(pres);
}

void RadixSortTest()
{
	int a[10] = { 11111111,234567891,231,4214,526,789,567,890,765,465 };
	RadixSort(a, 10, 9);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}


struct barrel {
	int node[10];
	int count;/* the num of node */
};
int partition(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int key = a[left];

	while (i < j)
	{
		while ((i < j) && (a[j] >= key))
		{
			j--;
		}
		if (i < j)
		{
			a[i] = a[j];
		}
		while ((i < j) && a[i] <= key)
		{
			i++;
		}

		if (i < j)
		{
			a[j] = a[i];
		}
	}
	a[i] = key;

	return i;
}

void quick_sort(int a[], int left, int right)
{
	int q = 0;
	/*µÝ¹éÖÕÖ¹Ìõ¼þ*/
	if (left >= right)
	{
		return;
	}

	q = partition(a, left, right);
	quick_sort(a, left, (q - 1));
	quick_sort(a, (q + 1), right);
	return;
}

void bucket_sort(int data[], int size)
{
	int max, min, num, pos;
	int i, j, k;
	struct barrel* pBarrel;

	max = min = data[0];
	for (i = 1; i < size; i++) {
		if (data[i] > max) {
			max = data[i];
		}
		else if (data[i] < min) {
			min = data[i];
		}
	}
	num = (max - min + 1) / 10 + 1;
	pBarrel = (struct barrel*)malloc(sizeof(struct barrel) * num);
	memset(pBarrel, 0, sizeof(struct barrel) * num);

	/* put data[i] into barrel which it belong to */
	for (i = 0; i < size; i++) {
		k = (data[i] - min + 1) / 10;/* calculate the index of data[i] in barrel */
		(pBarrel + k)->node[(pBarrel + k)->count] = data[i];
		(pBarrel + k)->count++;
	}

	pos = 0;
	for (i = 0; i < num; i++) {
		if ((pBarrel + i)->count != 0)
		{
			quick_sort((pBarrel + i)->node, 0, ((pBarrel + i)->count) - 1);/* sort node in every barrel */

			for (j = 0; j < (pBarrel + i)->count; j++) {
				data[pos++] = (pBarrel + i)->node[j];
			}
		}
	}
	free(pBarrel);
}

void bucket_sort_test()
{
	int a[] = { 78, 17, 39, 26, 72, 94, 21, 12, 23, 91 };
	int size = sizeof(a) / sizeof(int);
	printf("\r\n bucket sort test ...");
	bucket_sort(a, size);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	
	//CountSortTest();
	//RadixSortTest();
	bucket_sort_test();

	return 0;
}