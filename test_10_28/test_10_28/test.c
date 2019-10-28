#define _CRT_SECURE_NO_WARNINGS 1


////6.递归和非递归分别实现求n的阶乘
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0,i = 0;
//	int m = 1;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		m *= n - i;
//	}
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int fab(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fab(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fab(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//7.递归方式实现打印一个整数的每一位
//#include<stdio.h>
//#include<stdlib.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n",n%10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); 
//	print(n);
//	system("pause");
//	return 0;
//}
//1.完成猜数字游戏。
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//menu()
//{
//	
//	printf("*********************\n");
//	printf("***** 1. play *******\n");
//	printf("***** 2. exit *******\n");
//}
//void game()
//{
//	int num = 0;
//	num = rand();
//	printf("%d\n", num);
//}
//int main()
//{
//	int input = 0;
//	srand((unsighed int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case 0:
//				printf("退出游戏\n");
//				break;
//			case 1:
//				game();
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}

////2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 8;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right--;
		}
		if (arr[mid] < k)
		{
			left++;
		}
		else
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	if (left>right)
	{
		return -1;
	}
	system("pause");
	return 0;
}

//3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0, m = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出系统\n");
//	}
//	system("pause");
//	return 0;
//}
