#define   _CRT_SECURE_NO_WARNINGS


#include<stdio.h>



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		while (n > 9)
//		{
//			int i = 0;
//			i = n % 10;
//			n = n / 10;
//			if (i % 2 != 0)
//				printf("1");
//			else
//				printf("0");
//		}
//		if(n%2 != 0)
//			printf("1");
//		else
//			printf("0");
//	}
//
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = n - 1; j > n - 2 - i; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	float a = 0.0;
//	int m = 0;
//	int d = 0;
//	int n = 0;
//	scanf("%f %d %d %d", &a, &m, &d, &n);
//	if (m == 11 && d == 11)
//	{
//		a = a * 0.7 - n*50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		a = a * 0.8 - n * 50;
//	}
//
//	if (a < 0)
//		printf("%.2f", 0);
//	else
//		printf("%.2f", a);
//
//	return 0;
//}
