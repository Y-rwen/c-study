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
		printf("请在60秒内猜到数字防止电脑关机:>");
		scanf("%d", &guess);
		if (guess > ret) 
		{
			printf("猜大了\n");
		}
		else if (guess < ret) 
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &a);
		switch (a) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			system("shutdown -s");
			break;
		default:
			printf("请重新输入\n");
			break;

		}
	} while (a);
	
	
	return 0;

}


