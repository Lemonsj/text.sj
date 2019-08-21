#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("*****     1. Play    *****\n");
	printf("*****     0. Exit    *****\n");
	printf("**************************\n");

}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	PlayMove(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·£¡\n");
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}