#pragma once
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


#define ROW  3
#define COL  3


//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);

//�������
void PlayMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);

//ƽ��
int IsFull(char board[ROW][COL], int row, int col);