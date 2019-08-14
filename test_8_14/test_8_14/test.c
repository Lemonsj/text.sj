#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//1.完成猜数字游戏。
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*****      1. Exit       *****\n");
//	printf("*****      0. Play       *****\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	ret = rand() % 100 + 1;;
//	while (1)
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了!\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int k = 0;
//	scanf("%d", &k);
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//		
//	}
//	if (left <= right)
//	{
//		printf("找到了!\n");
//	}
//
//	if (left > right)
//	{
//		printf("找不到!\n");
//	}
//	return 0;

//}
//
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//>
//#include<string.h>
//int main()
//{
//	char password = "wangchenyi";
//	char psw[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码>:");
//		scanf("%s", psw);
//		if (strcmp(psw, "wangchenyi") == 0)
//		{
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("Exit");
//	}
//	else
//	{
//		printf("Log in");
//	}
//	return 0;
//}
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//int main()
//{
//	int ch ;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0' && ch <= '0')
//		{
//			;
//		}
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在一分钟后关机，如果输入：王晨艺，就取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "王晨艺") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	printf("电脑将在一分钟后关机，如果输入：王晨艺，就取消关机！\n");
//again:
//	scanf("%s", input);
//	if (strcmp(input, "王晨艺") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

