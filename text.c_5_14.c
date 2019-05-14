#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a + b) / 2.0;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = a - (a - b) / 2.0;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a + b) >> 1;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a&b) + (a^b) / 2;
	printf("aver = %lf", ave);
	system("pause");
	return 0;
}
//1.递归和非递归分别实现求第n个斐波那契数。

int fib(int n)
{
	if (n <= 2)  return 1;
	else return fib(n - 1) + fib(n - 2);

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d ", ret);
	system("pause");
	return 0;
}

int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	scanf("%d", &n);
	if (n <= 2) return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	printf("%d ", c);
	system("pause");
	return 0;
}

//2.编写一个函数实现n^k，使用递归实现
int Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n*Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	scanf("%d%d", &n, &k);
	ret = Pow(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
		return  DigitSum(n / 10) + n % 10;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d ", ret);
	system("pause");
	return 0;
}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello world";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}