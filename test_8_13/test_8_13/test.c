#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>

//
//
//1.����Ļ���������ͼ����
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0; 
//	scanf("%d", &n);
//
//	for (i = 1; i < n / 2 + 1; i++)
//	{
//		for (j = 1; j < n / 2 + i; j++)
//		{
//			if (j >= n / 2 - i + 2)
//			{
//				printf("*");
//			
//			}
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = n / 2; i >= 1; i--)
//	{
//		for (j = 1; j <=n / 2 + i; j++)
//		{
//			if (j >= n / 2 - i + 2)
//			{
//				printf("*");
//
//			}
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	int i = 0; 
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//
///*
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//*/
//
//
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	for (i = 100; i <= 999;i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d ", count);
//	return 0;
//}
//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	b = a;
//	for (i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + b;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &k);
//	
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
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
//	}
//	if (left<=right)
//	{
//		printf("�ҵ��ˣ�\n");
//	}
//	else
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s",arr2);
//		printf("\n");
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	char password[] = "wangchenyi";
//	char psw[20] = "0";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������¼����:");
//		scanf("%s", psw);
//		if (strcmp(psw, "wangchengyi") == 0)
//		{
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//	{
//		printf("Exit\n");
//	}
//	else
//	{
//		printf("Log in\n");
//	}
//	return 0;
//}