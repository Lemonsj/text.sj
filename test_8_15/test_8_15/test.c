#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 0;
//	}
//	else
//	{
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}

//int fib(int n)
//{  
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 0;
//	}
//	else
//	{
//		while (n>2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}

//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	return 0;
//	
//}
//
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//void Print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d = %d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	Print(line);
//	return 0;
//}
//2.使用函数实现两个数的交换。
//
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	swap(&a, &b);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//
//}
//3.实现一个函数判断year是不是润年。
//
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		ret = is_leap_year(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}
//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
////
//
//void InitArr(int* str,int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		str[i] = i+1;
//	}
//}
//void EmptyArr(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		str[i] = 0;
//	}
//}
//void ReverseArr(int* str, int left, int right)
//{
//	while (left <= right)
//	{
//		int tmp = 0;
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = 10;
//	int left = 0;
//	int right = sz - 1;
//	InitArr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	ReverseArr(arr, left, right);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	EmptyArr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//
//int is_sushu(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x%i != 0)
//		{
//			return 1;
//		}
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		ret = is_sushu(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int Jude(int y)
//{
//	int count = 0;
//	//123
//	int sum = 0;
//	int x = y;
//	while (x)
//	{
//		count++;
//		x /= 10;
//	}
//	x = y;
//	while (x)
//	{
//		sum += pow(x%10, count);
//		x /= 10;
//	}
//	if (sum == y)
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
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i < 10000; i++)
//	{
//		ret = Jude(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			;
//		}
//
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在一分钟后关机，如果输入：王晨艺，就取消关机\n");
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

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(const char* str)
//{
//	int ret = 0;
//	if (*str != '\0')
//	{
//
//	}
//}













