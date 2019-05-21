#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//#include<assert.h>
//char* my_strcpy(char* pdest, const char* psrc)
//{
//	char* ret = pdest;
//	assert(psrc != NULL);
//	assert(pdest != NULL);
//	while (*pdest = *psrc)
//	{
//		pdest++;
//		psrc++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "aaaaaaaaaaaa";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}
//
//
//
//
//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//
//int count_one_bits(unsigned int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int ret = 0;
//	ret = count_one_bits(m);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int count_one_bits(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//		{
//			count++;
//			m = m / 2;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = count_one_bits(num);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	system("pause"); 
//	return 0;
//}
//
//
//3. 输出一个整数的每一位。
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
//
//}
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//  
//int diff_bit(int x, int y)
//{
//	int count = 0;
//	int m = 0;
//	m = x^y;
//	while (m)
//	{
//		count++;
//		m = m&(m - 1);
//	}
//	return count;
//} 
//int diff_bit(int x, int y)
//{
//	int count = 0;
//	int m = 0;
//	m = x^y;
//	while (m)
//	{
//		count++;
//		m = m&(m - 1);
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d%d", &m,&n);
//	ret = diff_bit(m, n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//	   5.写博客总结C语言操作符，博客链接发给我，并分享到群里。


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); 
//	m = m^n;
//	n = m^n;
//	m = m^n;
//	printf("m = %d  n = %d\n", m, n);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int x = 0;
//	int y = 0;
//	x = ++a;
//	x = a++;
//	y = --a;
//	y = a--;
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
