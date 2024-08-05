#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//void print(unsigned int b)
//{
//	if (b > 9)
//	{
//		print(b / 10);
//	}
//	printf("%d ", b % 10);
//}
//
//int main()
//{
//
//	unsigned int a = 0;
//	scanf("%u", &a);
//	print(a);
//	return 0;
//}

//int  Fac(int i)
//{
//	if (i > 0)
//	{
//		return i * Fac(i - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int i = my_strlen(arr);
//	printf("%d\n",i);
//
//	return 0;
//}

//char reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int i = 0;
//	int sum = 0;
//	scanf("%u",&i);
//	sum = DigitSum(i);
//	printf("%d", sum);
//
//	return 0;
//}

//int Power(int n, int k)
//{
//	if (k > 0  && k != 0)
//		return n * Power(n, k - 1);
//	if (k < 0 && k != 0)
//      return 1.0 / Power(n, -k);
//	else
//		return 1;		
//}
//
//
//
//int main()
//{
//	
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int num = Power(n, k);
//	printf("%d\n", num);
//
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fib(n);
//	printf("%d", sum);
//
//	return 0;
//}
