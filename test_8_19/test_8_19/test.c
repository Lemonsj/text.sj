#define _CRT_SECURE_NO_WARNINGS 1
////2.编写一个函数实现n^k，使用递归实现
////
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//#include<stdio.h>
//
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(x - 1) + fib(x - 2);
//	}
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
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}
//
//#include<stdio.h>
//
//int Pow(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1;
//	}
//	else if (y == 1)
//	{
//		return x;
//	}
//	else if (y > 1)
//	{
//		return x*Pow(x, --y);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%d", ret);
//	return 0;
//}
//
//int DigitSum(int x)
//{
//	if (0<x && x <= 9)
//	{
//		return x;
//	}
//	else if (x > 9)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//
//
//#include<stdlib.h>
//#include<string.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int i = 0;
//	int len = my_strlen(str);
//	assert(str);
//	if (*str)
//	{
//		char temp = str[0];
//		str[0] = str[len - 1];
//		str[len - 1] = '\0';
//		reverse_string(str + 1);
//		str[len - 1] = temp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//
//}
//5.递归和非递归分别实现strlen
//int my_strlen(char* str)
//{
//	int num = 0;
//	while (*str++ != '\0')
//	{
//		num++;
//	}
//	return num;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//
//6.递归和非递归分别实现求n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d", num);
//	return 0;
//}
//
//
//int fab(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*fab(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fab(n);
//	printf("%d", ret);
//	return 0;
//}
//
//7.递归方式实现打印一个整数的每一位
//void Print(int x)
//{
//	if (0 < x && x <= 9)
//	{
//		printf("%d ",x);
//	}
//	else if (x > 9)
//	{
//		Print(x / 10);
//		printf("%d ", x % 10);
//		
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}



1.
写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}s
2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。
3. 输出一个整数的每一位。
4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
//int count_one_bits(int x)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i < 32; i++)
//	{
//		if ((x & 1) == 1)
//		{
//			num++;
//		}
//		x >>= 1; 
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d", ret);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	scanf("%d", &n);
//	x = n;
//	for (i = 31; i >=0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	x = n;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//
//
//
//void print_num(int num)
//{
//	if (num > 9)
//	{
//		print_num(num / 10);
//		printf("%d", num % 10);
//	}
//	else
//		printf("%d", num);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_num(num);
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (0 < n && n < 9)
//	{
//		printf("%d", n);
//	}
//	else
//	{
//		while (n > 0)
//		{
//			printf("%d", n % 10);
//			n /= 10;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &n, &m); 
//	x = (m^n);
//	for (i = 0; i < 32; i++)
//	{
//		if ((x & 1) == 1)
//		{
//			count++;
//		}
//		x >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}





