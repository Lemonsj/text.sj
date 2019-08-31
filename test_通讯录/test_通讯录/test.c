#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("****************************************\n");
	printf("***        1.Add          2.Del      ***\n");
	printf("***        3.Search       4.Modify   ***\n");
	printf("***        5.Show         6.Sort     ***\n");
	printf("***        0.Exit                    ***\n");
	printf("****************************************\n");
}

void test()
{
	int input = 0;
	struct Contact con = { 0 };
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		default:
			SaveContact(&con);
			DestroyContact(&con);
			printf("Ñ¡Ôñ´íÎó!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}