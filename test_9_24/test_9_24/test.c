#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("fun(2017) = %d\n", fun(2019));
//	return 0;
//}

//因为Win32 console Application的入口函数是Main（）
//而Win32 Application的入口函数才是WinMain（）

//#include<stdlib.h>
//
//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//}
//void test()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	system("pause");
//	return;
//}

//125
// 10000000 11111100
// 11111111 00000011
// 11111111 00000100
//01111101
//10000010
//10000011
//int main()
//{
//	int a = 4;
//	printf("%d\n", ++(a++));
//	return 0;
//}


//int main()
//{
//	int c = 0;
//	printf("%d , %d\n", c++, c++);
//	return 0;
//}

//int main()
//{
//	int c = 0;
//	printf("%d %d\n", c++, c++);
//	return 0;
//}

//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	return 0;
//
//}
//
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int c = 0;
//	c = a++, b++;
//	printf("%d\n", c);
//	return 0;
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//#include<assert.h>
//
//int rearch_minnum(int* str, int x)
//{
//	assert(str != NULL);
//	int min = str[0];
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		if (str[i] < min)
//		{
//			min = str[i];
//		}
//	}
//	return min;
//}
//int main()
//{
//	int arr[10] = { 5, 3, 6, 1, 7, 9, 2, 4, 8, 0 };
//	int k = 5;
//	int ret = 0;
//	ret = rearch_minnum(arr, k);
//	printf("%d\n", ret);
//	return 0;
//}