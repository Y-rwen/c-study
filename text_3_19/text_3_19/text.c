#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>



//int main()
//{
//	int arr[] = { 0,1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//void unprint(char* p, int sz)
//{
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%s", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	unprint(arr, sz);
//	return 0;
//}

//int my_add(int a, int n)
//{
//	int i = 0;
//	int m = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		m += k;
//	}
//	return m;
//}
//
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = my_add(a, n);
//	printf("%d\n", sum);
//
//	return 0;
//}




//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = line - 1; i > 0; i--)
//	{
//		int j = 0;
//		for (j = 0; j < line - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while(a*i%b)
//	{
//		i++;
//	}
//	printf("%d", i * a);
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	while(left < right)
//	{
//		char* tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	printf("%s", arr);
//	return 0;
//
//}


