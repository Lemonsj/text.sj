#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
Menu()
{
	printf("*************************\n");
	printf("****     1. Play     ****\n");
	printf("****     0. Exit     ****\n");
	printf("*************************\n");
}

void Game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}
void Test()
{
	int c = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择：");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}
	} while (c);
}
int main()
{
	
	Test();
	char board[ROW][COL] = { 0 };
	int row = 0, col = 0;
	DisplayBoard(board, row, col);
	system("pause");
	return 0;
}