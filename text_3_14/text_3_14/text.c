#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			j++;
//	}
//	printf("%d", j);
//
//	return 0;
//
//}
//n & (n-1)

//int cmp_num_of_1(int m,int n)
//{
//	int count = 0;
//	int a = m ^ n;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int x = cmp_num_of_1(m, n);
//	printf("%d", x);
//	return 0;
//
//}

//void num_sort(n)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	num_sort(n);
//
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	int mon = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &mon) == 2)
//	{
//		int d = days[mon];
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			if (mon == 2)
//			{
//				d++;
//			}
//		}
//		printf("%d\n", d);
//	}
//	
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("equilateral\n");
//			}
//			else if ((a == b && b != c) || (a == c && a != b) || (b == c && c != a))
//			{
//				printf("lsosceles");
//			}
//			else
//			{
//				printf("ordinary");
//			}
//		}
//		else
//		{
//			printf("not a triangle");
//		}
//	}
//
//	return 0;
//}






#define uchar unsigned char

#define SJA_ADR 0X0000 //Ƭѡֱ�ӽӸ�
#define MODE XBYTE[SJA_ADR+0x00] //ģʽ�Ĵ���
#define CMR XBYTE[SJA_ADR+0x01] //����Ĵ���
#define SR XBYTE[SJA_ADR+0x02] //״̬�Ĵ���
#define IR XBYTE[SJA_ADR+0x03] //�жϼĴ���
#define IER XBYTE[SJA_ADR+0x04] //�ж�ʹ�ܼĴ���
#define BTRO XBYTE[SJA_ADR+0x06] //ʱ��Ĵ��� 0
#define BTR1 XBYTE[SJA_ADR+0x07] //ʱ��Ĵ���1
#define OCR XBYTE[SJA_ADR+0x08] //������ƼĴ���
#define TEST XBYTE[SJA_ADR+0x09] //���ԼĴ���
#define ALC XBYTE[SJA ADR+0x0b] //�ٲö�ʧ��׽�Ĵ���
#define ECC XBYTE[SJA_ADR+0x0c] //������벶׽�Ĵ���
#define ELWR XBYTE[SJA_ADR+0x0d] //���󱨾��޶�Ĵ���
#define RXERR XBYTE[SJA_ADR+0x0e] //RX ���������
#define TXERR XBYTE[SJA_ADR+0x0f] //TX ���������
//#define TXB XBYTE[SJA_ADR+10] //���ķ��ͻ�����(����ģʽ��)
//#define RXB XBYTE[SJA_ADR+10] //���Ľ��ջ�����(����ģʽ��)
#define TXSFF XBYTE[SJA_ADR+16]//TX��׼֡���Ļ�����������ģʽ�£�
#define TXID1 XBYTE[SJA_ADR+17] //TX IDI(����ģʽ�£�
#define TXID2 XBYTE[SJA_ADR+18] //TXID2
#define TXDATA1 XBYTE[SJA_ADR+19] //TXDATA1������ģʽ�£�
#define RXDATA1 XBYTE[SJA_ADR+19] //RXDATA1������ģʽ�£�
#define ACRO XBYTE[SJA_ADR+16] //���մ���Ĵ���(��λģʽ��)
#define ACR1 XBYTE[SJA_ADR+17]
#define ACR2 XBYTE[SJA_ADR+18]
#define ACR3 XBYTE[SJA_ADR+19] //���մ���Ĵ���(��λģʽ�£�
#define AMRO XBYTE[SJA ADR+0x14]
#define AMR1 XBYTE[SJA ADR+0x15]
#define AMR2 XBYTE[SJA ADR+0x16] //�������μĴ���
#define AMR3 XBYTE[SJA_ADR+0x17] //�������μĴ���
//#define RBSA XBYTE[SJA_ADR+0x1E]//RX��������ʼ��ַ//��������
#define CDR XBYTE[SJA_ADR+0x1f] //ʱ�ӷ�Ƶ��
#define ID 0x01 //����ID��
#define TOID 0x00 //��λ��ID��


Sja1000_Init()
{
	uchar i;
	MODE = 0x09;
	CDR = 0x88;
	IER = 0x0D;
	ACR0 = 0X00;
	ACR1 = ID << 5;
	ACR2 = 0x00;
	ACR3 = 0x00;
	AMR0 = 0X00;
	AMR1 = 0X00;
	AMR2 = 0xff;
	AMR3 = 0xff;
	BTR0 = 0X00;
	BTR1 = 0x1c;
	OCR = 0xaa;
	//RBSA = 0x00;
	TXERR = 0x00;
	i = ECC;
	MODE = 0x08;
	Delay(255, 255);

}