#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include <string.h>

//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s", arr);
//
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (k < arr[x][y]) 
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d",& k);
//	int a = 3;
//	int b = 3;
//	int ret = find_num(arr,&a,&b,k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("’“≤ªµΩ");
//
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int i = 0;
//	int arr[50] = {0};
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int m = 0;
//	int a = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			j++;
//		}
//		else if (arr[i] < arr[i + 1])
//		{
//			a++;
//		}
//		else
//		{
//			m++;
//		}
//	}
//	if (j+m == n - 1 || a+m == n - 1 || m == n - 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//
//	return 0;
//}