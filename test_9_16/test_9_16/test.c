#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char a[20];
//	char *p1 = (char*)a;
//	char *p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//	return 0;
//}

//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 3;
//	int b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}

//int main()
//{
//	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//      1+ 1||0-1
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i = %d, sum = %d", i, sum);
//	return 0;
//}

//int main()
//{
//	//12
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	//12
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	//16
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//
//	return 0;
//}

//#pragma pack()
//
//int main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 5,
//		A1,
//		B1
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 0;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k = 0;
//	k = fun(j, m);
//	printf("%d\n", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	return;
//}

//int count_num(unsigned int x)
//{
//	int count = 0;
//	int i = 0;
//	while (x != 0)
//	{
//		for (i = 0; i < 32; i++)
//		{
//			if ((x >> i) && 1 == 1)
//			{
//				count++;
//			}
//		}
//		return count;
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int x = 15;
//	int ret = 0;
//	ret = count_num(x);
//	printf("%d\n", ret);
//	return 0;
//}


//5,5,5,1
//5 + 5 * (5-1)
//5*(5-1/5)
//(5 + 1)*5-5




//int main()
//{
//	printf("%d\n", 5 * 5 - 1 / 5);
//	return 0;
//}






