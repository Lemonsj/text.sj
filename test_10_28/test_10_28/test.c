#define _CRT_SECURE_NO_WARNINGS 1


////6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//1.��ɲ�������Ϸ��
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			case 1:
//				game();
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}

////2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
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

//3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0, m = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�ϵͳ\n");
//	}
//	system("pause");
//	return 0;
//}
