#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//1.��ɲ�������Ϸ��
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
//		printf("������µ�����>:");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���!\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

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
//		printf("�ҵ���!\n");
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ���!\n");
//	}
//	return 0;

//}
//
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//>
//#include<string.h>
//int main()
//{
//	char password = "wangchenyi";
//	char psw[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������>:");
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
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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
//	printf("���Խ���һ���Ӻ�ػ���������룺�����գ���ȡ���ػ���\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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
//	printf("���Խ���һ���Ӻ�ػ���������룺�����գ���ȡ���ػ���\n");
//again:
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

