#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>



void menu() 
{

	printf("**********************\n");
	printf("*****  1.  play  *****\n");
	printf("*****  0.  exit  *****\n");
	printf("**********************\n");
}

void game()
{
	int guess = 0;
	int ret = rand()%100+1;
    
	while(1)
	{
		system("shutdown -s -t 60");
		printf("����60���ڲµ����ַ�ֹ���Թػ�:>");
		scanf("%d", &guess);
		if (guess > ret) 
		{
			printf("�´���\n");
		}
		else if (guess < ret) 
		{
			printf("��С��\n");
		}
		else 
		{
			printf("��ϲ�㣬�¶���\n");
			system("shutdown -a");
			break;
		}
	}
}


int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &a);
		switch (a) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			system("shutdown -s");
			break;
		default:
			printf("����������\n");
			break;

		}
	} while (a);
	
	
	return 0;

}


