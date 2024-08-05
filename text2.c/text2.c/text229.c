#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    float c = 0.0f;
//    float num = 0.0f;
//    scanf("%d %d", &a, &b);
//    c = b / 100.0;
//    num = a / c / c;
//
//    printf("%.2f", num);
//    return 0;
////}
////int main()
////{
////	int i = 1;
////	int ret = 1;
////	int sum = 0;
////	for (i = 1; i <=10 ; i++)
////	{
////		ret = ret * i;
////		sum += ret;
////	}
////	printf("%d", sum);
////
////	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int left = 0;
//	int k = 5;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k) 
//		{
//			left = mid + 1;
////
////		}
////		else if (arr[mid] > k) 
////		{
////			right = mid - 1;
////		}
////		else 
////		{
////			printf("%d", arr[mid]);
////			break;
////		}
////			
////	}
////	if (left > right)
////		printf("无此元素\n");
////	return 0;
//
//
//}


//int main()
//{
//	
//	char arr2[] =  "hello world!!!" ;
//	char arr1[] =  "**************" ;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while  (left <= right) 
//	{
//		arr1[right] = arr2[right];
//		arr1[left] = arr2[left];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//
//	for (i = 0; i < 3; i++) 
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//
//		}
//	}
//	if(i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//
//	}
//	return 0;
//}


//int is_prime(int n) 
//{   
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++) 
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}		
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2) 
//	{
//		if (is_prime(i)) 
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}

//int is_leap_year(int n) 
//{
//		if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) 
//			return 1;
//		else
//			return 0;
//}
//
//int main() 
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) 
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	while(left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) 
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1) 
//	{
//		printf("找不到\n");
//
//	}
//	else 
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//void add(int* p) 
//{
//	return ++(*p);
//}
//
//int main() 
//{
//	int sum = 0;
//	while (1) 
//	{
//		add(&sum);
//		Sleep(1000);
//		printf("%d ", sum);
//	}
//
//	return 0;
//}


//void  Swap(int* px, int* py)
//{
//	int n = *px;
//	*px = *py;
//	*py = n;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c);
//	{
//		Swap(&a, &c);
//	}
//	if (b < c);
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf(" %d ", i);
//			a++;
//		}
//	}
//	printf("\n%d", a);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	if(a > b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//    }
//	for (c = 1; c <= a; c++)
//	{
//		if (a % c == 0 && b % c == 0)
//			printf("%d ", c);
//	}
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9  || i / 10 == 9)
//		{
//			printf("%d ", i);
//			a++;
//		}
//	}
//	printf("%d ", a);
//	return 0;
//}


//int main()
//{
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum - 1.0 / i;
//		else
//			sum = sum + 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}