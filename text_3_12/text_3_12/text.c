#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//int fib(n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d", m);
//
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[50] = { 0 };
//	scanf("%d",&n);
//	for (i = 0; i <= 50; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int del = 0;
//	scanf("%d",&del);
//	int j = 0;
//	for (i = 0; i <= 50; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	int sum = max - min;
//	printf("%d", sum);
//	
//	return 0;
//}



//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (max < score)
//			max = score;
//	}
//	printf("%d", max);
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1;j <= 4;j++)
//		{
//			int k = (int)pow(10,j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}