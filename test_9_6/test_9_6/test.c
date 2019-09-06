#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include<math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32; i++)
	{
		//ret += (value >> i)*pow(2, 31 - i);
		ret += (((value >> i) & 1) *(1 << (31 - i)));

	}
	return ret;
}
int main()
{
	int a = 0;
	printf("请输入一个数:>");
	scanf("%d", &a);
	printf("%u\n", reverse_bit(a));
	return 0;
}


