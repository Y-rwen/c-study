#define   _CRT_SECURE_NO_WARNINGS



#include<stdio.h>

//int cmp(const void* e1,const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//void Swap(char* buf1, char* buf2,size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void my_qsort(void* arr, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr+j*width,(char*)arr+(j+1)*width)>0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//			}
//		}
//		flag = 0;
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	
//}
//
//
//void taxt1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	taxt1();
//	return 0;
//}
