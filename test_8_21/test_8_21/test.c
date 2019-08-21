#define _CRT_SECURE_NO_WARNINGS 1
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


//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//unsigned int reverse_bit(unsigned int x)
//{
//	int i = 0;
//	int arr[32] = { 0 };
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i) & 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//	}
//	for (i = 0; i < 32; i++)
//	{
//		sum += arr[i] * (unsigned int)pow(2, 31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	ret = reverse_bit(n);
//	printf("%u ", ret);
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a + (b - a) / 2;
//	printf("%d ", c);
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//int main()
//{
//	int arr[7] = { 1, 2, 3, 4, 1, 2, 3 };
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d ", ret);
//	return 0;
//}
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//void reserve_arr(char* str, int k)
//{
//	int left = 0;
//	int right = k - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void fans(char* str)
//{
//	if (*str != '\0')
//	{
//		char *p = str;
//		while (*p != ' ')
//		{
//			str++;
//		}
//		reserve_arr(p, str - 1);
//		p++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = 0;
//	int i = 0;
//	len = strlen(arr);
//	printf("原字符串是: %s\n", arr);
//	reserve_arr(arr, len);
//	printf("%s", arr);
//	return 0;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char *left, char *right)
//{
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void ReverseStr(char *str)
//{
//	char *left = str;
//	char *right = str + MyStrlen(str) - 1;
//	char *cur = str;
//	reverse(left, right);
//	while (*cur != '\0')
//	{
//		char *start = cur;
//		while (*cur != ' '&&*cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		if (*cur == ' ')
//		{
//			cur++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	ReverseStr(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}











