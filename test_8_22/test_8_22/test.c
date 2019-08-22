#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define ROW 3
#define COL 3
//4.有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reserve_arr(char* str, char*ptr)
//{
//	char* left = str;
//	char* right = ptr;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void fans(char*str, int k)
//{
//	char*ptr = str;
//	char* left = str;
//	char* right = str + k - 1;
//	while (*ptr)
//	{
//		left = ptr;
//		while ((*ptr != ' ') && (*ptr != '\0'))
//		{
//			ptr++;
//		}
//		right = ptr - 1;
//		reserve_arr(left, right);
//		if (*ptr == ' ');
//		{
//			ptr++;
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("原来的字符串:");
//	printf("%s\n", arr);
//	reserve_arr(arr, arr + len - 1);
//	printf("现在的字符串:");
//	printf("%s\n", arr);
//	return 0;
//}

//
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int i = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 0;
//	int x = 0;
//	int y = COL-1;
//	scanf("%d", &k);
//	/*while ((x <= 2) && (y >= 0))
//	{
//		if (arr[x][y] == k)
//		{
//			printf("找到了！\n %d %d", x, y);
//			break;
//		}
//		else if (arr[x][y]<k)
//			x++;
//		else
//			y--;
//	}
//	if ((x>2) || (y < 0))
//	{
//		printf("找不到了\n");
//	}*/
//
//	while ((x <= 2) && (y >= 0))
//	{
//		if (arr[x][y] == k)
//		{
//			printf("找到了！\n %d %d", x, y);
//			break;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找不到！\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
