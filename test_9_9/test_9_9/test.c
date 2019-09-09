#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define ROW 3
#define COL 3
//int main()
//{
//	const char*p = "Hello!";
//	printf("%c\n", *p);
//	return 0;
//} 

//int search_num(int arr[ROW][COL], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x < row && y>=0)
//	{
//		if (arr[x][y] == k)
//		{
//			return 1;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			x++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = search_num(arr, ROW, COL, k);
//	if (ret == 1)
//	{
//		printf("找到了！\n");
//	}
//	else
//	{
//		printf("找不到!\n");
//	}
//	return 0;
//}

//int search_num(int arr[ROW][COL], int k)
//{
//	int x = 0;
//	int y = COL - 1;
//	while (x < ROW && y >= 0)
//	{
//		if (arr[x][y] == k)
//		{
//			return 1;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			x++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = search_num(arr, k);
//	if (ret == 1)
//	{
//		printf("找到了！\n");
//	}
//	else
//	{
//		printf("找不到!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d\n", a);
//	return 0;
//}
#include<string.h>
#include<assert.h>

void change_arr(char* str, int k)
{
	char* p = str;
	int i = k - 1;
	int j = 0;
	int count = 0;
	while (i>=0)
	{
		if (str[i] == ' ')
		{
			for (j = k; j >= i; j--)
			{
				str[j + 2] = str[j];
			}
			str[i] = '%';
			str[i + 1] = '2';
			str[i + 2] = '0';
			k += 2;
		}
		i--;
	}
}
int main()
{
	char arr[30] = "We Are Happy";
	int sz = strlen(arr);
	change_arr(arr, sz);
	printf("%s\n", arr);
	return 0;
}