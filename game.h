#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//��ʼ�����̺���
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ����*����ʾ���Ӯ����#����ʾ����Ӯ����Q����ʾƽ�֣���C����ʾ����
char IsWin(char board[ROW][COL], int row, int col);

//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);






