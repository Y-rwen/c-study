#define   _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board [ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row ; i++)
	{
		int j = 0;
		for (j = 0; j < col ; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) 
		{
			int j = 0;
			for (j = 0; j < col; j++) 
			{
				printf("---");
				if(j < col -1)
					printf("|");
			}
			printf("\n");
		}
		}
			
}


void PlayMove(char board[ROW][COL], int row, int col)
{
	printf("游戏开始\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家下棋:>");
		
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("位置被占用，请重新输入:>");
		}
		else
			printf("非法坐标，请重新输入:>");
	}
}


void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
	}
}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}




char Iswin(char board[ROW][COL], int row, int col)
{
	while (1) 
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			int a = 0;
			int b = 0;
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == '*')
				{
					a++;
				}
				if (board[i][j] == '#')
				{
					b++;
				}
			}
			if (a == row || b == row)
			{
				return board[i][1];
				break;
			}
		}
		break;
	}
	while (1) 
	{
		int i = 0;
		int j = 0;
		for (j = 0; j < col; j++)
		{
			int a = 0;
			int b = 0;
			for (i = 0; i < row; i++)
			{
				if (board[i][j] == '*')
				{
					a++;
				}
				if (board[i][j] == '#')
				{
					b++;
				}
			}
			if (a == row || b == row)
			{
				return board[1][j];
				break;
			}
		}
		break;
	}
	while (1)
	{
		int i = 0;
		int j = 0;
		int a = 0;
		int b = 0;
		while (i < row && j < col)
		{
			if (board[i][j] == '*')
				a++;
			if (board[i][j] == '#')
				b++;
			i++;
			j++;
		}
		if (a == row || b == row)
		{
			return board[1][1];
			break;
		}
		break;
	}
	while (1)
	{
		int i = 0;
		int j = col - 1;
		int a = 0;
		int b = 0;
		while (i < row && j >= 0)
		{
			if (board[i][j] == '*')
				a++;
			if (board[i][j] == '#')
				b++;
			i++;
			j--;
		}
		if (a == row || b == row)
		{
			return board[row - 1][0];
			break;
		}
		break;
	}
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}