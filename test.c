#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("***  0：退出游戏  *******\n");
	printf("***  1：开始游戏  *******\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		char res = '0';
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res == '*')
		{
			printf("玩家赢了\n");
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res == '#')
		{
			printf("电脑赢了\n");
			break;
		}
		if (res == 'Q')
		{
			printf("平局\n");
			break;
		}
	}
}


int main()
{
	int input;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("退出游戏");
			break;
		}
		case 1:
		{
			game();
			break;
		}
		default:
		{
			printf("输入错误");
			break;
		}
		}
	} while (input);
	return 0;
}