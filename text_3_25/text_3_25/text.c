#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int my_strlen(const char* arr)
//{
//
//	int count = 0;
//	assert(arr);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdegfghi";
//	int n = my_strlen(arr);
//	printf("%d", n);
//	return 0;
//}

//void my_strcpy(char* arr1,const char* arr2)
//{
//	/*assert(arr1);
//	assert(arr2);
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;*/
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[] = "*************";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}

// void move_odd_even(int arr[], int sz)
//{
//	 int left = 0;
//	 int right = sz - 1;
//	 while (left < right)
//	 {
//		 while ((left < right) && (arr[left] % 2 == 1))
//		 {
//			 left++;
//		 }
//		 while ((left < right) && (arr[right] % 2 == 0))
//		 {
//			 right--;
//		 }
//		 if (left < right)
//		 {
//			 int tmp = arr[left];
//			 arr[left] = arr[right];
//			 arr[right] = tmp;
//			 left++;
//			 right--;
//		 }
//	 }
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move_odd_even(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}