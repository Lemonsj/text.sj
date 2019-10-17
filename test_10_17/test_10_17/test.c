#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h> 

//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}


//
int count_differ(int x, int y)
{
	int i = 0;
	int str1[32] = { 0 };
	int str2[32] = { 0 }; 
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		str1[i] = (x >> i) & 1;
	}
	for (i = 0; i < 32; i++)
	{
		str2[i] = (x >> i) & 1;
	}
	for (i = 0; i < 32; i++)
	{
		if (str1[i] != str2[i])
		{
			count++;
		}
	}
	return count;

}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	printf("请输入一个数A ： \n");
	scanf("%d", &a);
	printf("请输入一个数B ： \n");
	scanf("%d", &b);
	ret = count_differ(a, b);
	printf("%d\n", ret);
	return 0;

}

int DifferInbit1(int a, int b)
{
	int count = 0;
	int  tmp = a^b;//两个操作数进行异或
	while (tmp)
	{
		//求异或后二进制序列中1的个数
		++count;
		tmp &= (tmp - 1);
	}
	return count;
}


int  DifferInbit(int a, int b)
{
	int count = 0, i = 0;
	for (i = 0; i<32; i++)
	{
		int ret = (a >> i) ^ (b >> i);//每一位进行异或
		if ((ret & 1) == 1)//判断是否为1
			count++;
	}
	return count;

}
