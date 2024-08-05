#define   _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n-i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n+1; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n+1-i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int arr[7] = {0};
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int count = 0;
//	while (count < 7)
//	{
//		for (i = 0; i < 6; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		count++;
//	}
//	int num = 0;
//	for (i = 1; i < 6; i++)
//	{
//		num += arr[i];
//	}
//	double aqre = 0.0;
//	aqre = num / 5.0;
//	printf("%.2lf\n", aqre);
//
//	return 0;
//}


//int main()
//{
//	int score = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d", &score) == 1)
//	{
//		n++;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//		sum += score;
//		if (n == 7)
//		{
//			printf("%.2lf\n", (sum - max - min) / 5.00);
//			n = 0;
//			sum = 0;
//			max = 0;
//			min = 100;
//		}
//	}
//	return 0;
//}


//void Search_dog(int* arr, int sz, int* dog1, int* dog2)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	int tmp = 0;
//	for (tmp = 0; tmp < 32; tmp++)
//	{
//		if (((num >> tmp) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> tmp) & 1) == 1)
//		{
//			*dog1 ^= arr[i];
//		}
//		else
//		{
//			*dog2 ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	Search_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d", dog1, dog2);
//	return 0;
//}


