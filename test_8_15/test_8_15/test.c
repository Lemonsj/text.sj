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
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//2.ʹ�ú���ʵ���������Ľ�����
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
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
//5.ʵ��һ���������ж�һ�����ǲ���������
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
//	printf("���Խ���һ���Ӻ�ػ���������룺�����գ���ȡ���ػ�\n");
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













