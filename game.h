#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//初始化棋盘函数
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢，“*”表示玩家赢，“#”表示电脑赢，“Q”表示平局，“C”表示继续
char IsWin(char board[ROW][COL], int row, int col);

//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col);






