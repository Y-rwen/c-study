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

#define SJA_ADR 0X0000 //片选直接接高
#define MODE XBYTE[SJA_ADR+0x00] //模式寄存器
#define CMR XBYTE[SJA_ADR+0x01] //命令寄存器
#define SR XBYTE[SJA_ADR+0x02] //状态寄存器
#define IR XBYTE[SJA_ADR+0x03] //中断寄存器
#define IER XBYTE[SJA_ADR+0x04] //中断使能寄存器
#define BTRO XBYTE[SJA_ADR+0x06] //时序寄存器 0
#define BTR1 XBYTE[SJA_ADR+0x07] //时序寄存器1
#define OCR XBYTE[SJA_ADR+0x08] //输出控制寄存器
#define TEST XBYTE[SJA_ADR+0x09] //测试寄存器
#define ALC XBYTE[SJA ADR+0x0b] //仲裁丢失捕捉寄存器
#define ECC XBYTE[SJA_ADR+0x0c] //错误代码捕捉寄存器
#define ELWR XBYTE[SJA_ADR+0x0d] //错误报警限额寄存器
#define RXERR XBYTE[SJA_ADR+0x0e] //RX 错误计数器
#define TXERR XBYTE[SJA_ADR+0x0f] //TX 错误计数器
//#define TXB XBYTE[SJA_ADR+10] //报文发送缓冲区(操作模式下)
//#define RXB XBYTE[SJA_ADR+10] //报文接收缓冲区(操作模式下)
#define TXSFF XBYTE[SJA_ADR+16]//TX标准帧报文缓冲区（操作模式下）
#define TXID1 XBYTE[SJA_ADR+17] //TX IDI(操作模式下）
#define TXID2 XBYTE[SJA_ADR+18] //TXID2
#define TXDATA1 XBYTE[SJA_ADR+19] //TXDATA1（操作模式下）
#define RXDATA1 XBYTE[SJA_ADR+19] //RXDATA1（操作模式下）
#define ACRO XBYTE[SJA_ADR+16] //验收代码寄存器(复位模式下)
#define ACR1 XBYTE[SJA_ADR+17]
#define ACR2 XBYTE[SJA_ADR+18]
#define ACR3 XBYTE[SJA_ADR+19] //验收代码寄存器(复位模式下）
#define AMRO XBYTE[SJA ADR+0x14]
#define AMR1 XBYTE[SJA ADR+0x15]
#define AMR2 XBYTE[SJA ADR+0x16] //验收屏蔽寄存器
#define AMR3 XBYTE[SJA_ADR+0x17] //验收屏蔽寄存器
//#define RBSA XBYTE[SJA_ADR+0x1E]//RX缓冲区起始地址//？？作用
#define CDR XBYTE[SJA_ADR+0x1f] //时钟分频器
#define ID 0x01 //本机ID号
#define TOID 0x00 //上位机ID号


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