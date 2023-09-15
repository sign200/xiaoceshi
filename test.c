#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("***  0���˳���Ϸ  *******\n");
	printf("***  1����ʼ��Ϸ  *******\n");
}

void game()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ���
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		char res = '0';
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		res = IsWin(board, ROW, COL);
		if (res == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		if (res == 'Q')
		{
			printf("ƽ��\n");
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
			printf("�˳���Ϸ");
			break;
		}
		case 1:
		{
			game();
			break;
		}
		default:
		{
			printf("�������");
			break;
		}
		}
	} while (input);
	return 0;
}