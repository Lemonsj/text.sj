#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("*****   1. Play   *****\n");
	printf("*****   0. Exit   *****\n");
	printf("***********************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board, ROW, COL);//玩家走
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);//电脑走
		DisplayBoard(board, ROW, COL);
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}
