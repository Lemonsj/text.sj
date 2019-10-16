#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//int main()
//{
//	int  i = 0;
//	printf("水仙花数有 ：\n");
//	for (i = 1; i < 1000000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
