#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int check()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	if (check() == 1)
//	{
//		printf("С�ˣ�\n");
//	}
//	else
//	{
//		printf("���!\n");
//	}
//	return 0;
//}

//void Find(int arr[3][3], int* prow, int* pcol, int k)
//{
//	int x = 0;
//	int y = *pcol - 1;
//	while (x <= 2 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//	*prow = -1;
//	*pcol = -1;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 8;
//	int row = 3;
//	int col = 3;
//	Find(arr, &row, &col, k);
//	printf("%d %d", row, col);
//	return 0;
//}

//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4 };
//}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//#include <stdio.h>
//#include <Windows.h>
//int drinkNum(int n)
//{
//	int count = n;
//	while (n > 1)
//	{
//		count = count + n / 2;
//		n = n / 2 + n % 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 20;
//	int ret = drinkNum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//3.ģ��ʵ��strcpy
//#include<assert.h>
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	/*while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}*/
//	return ret;
//}
//int main()
//{
//	char arr1[] = "**********************";
//	char arr2[] = "Hello Bit";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//4.ģ��ʵ��strcat
//#include<assert.h>
//char* my_strcat(char* str, const char*ptr)
//{
//		char* ret = str;
//		assert(str != NULL);
//		assert(ptr != NULL);
//		while (*str != '\0')
//		{
//			str++;
//		}
//		while (*str = *ptr)
//		{
//			str++;
//			ptr++;
//		}
//		return ret;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}