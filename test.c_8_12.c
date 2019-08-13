#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include<string.h>


//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}
//int Add(int, int);
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	system("pause");
//	return 0;
//}



//int swap(int* x, int* y)
//
//{
//	int t = 0;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	swap(a, b);
//	system("pause");
//	return 0;
//}

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）


//int main()
//{
//	int arr1[] = {1, 3, 5, 7, 9 };
//	int arr2[] = {2, 4, 6, 8, 10};
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a = -1 / i;
//		}
//		else
//			a = 1 / i;
//		sum += a;
//	}
//	printf("%d ", sum);
//	system("pause");
//	return 0;
//}
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i = 0; 
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10 == 9 )
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	} 
//	printf("%d ", count);
//	//system("pause");
//	return 0;
//}
//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int* q[4] = { 0 };
//	int k = 0;
//	for(k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}
//
//#define INT_PTR int*
//typedef int* int_ptr;
//
//int main()
//{
//	INT_PTR a, b;
//	int_ptr c, d;
//	return 0;
//}


//int main()
//{
//	int arr[4][4] = {
//		1, 2, 8, 9,
//		2, 4, 9, 12,
//		4, 7, 10, 13,
//		6, 8, 11, 15
//	};
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 3; i >0; i--)
//	{
//		int j = 0;
//		for (j = 3; j > 0; j--)
//		{
//			if (arr[i][j] < a)
//			{
//				printf("没有改整数！")；
//			}
//			else if
//			{
//
//			}
//		}
//	}
//}



