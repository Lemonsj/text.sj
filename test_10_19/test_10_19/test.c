#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char *str[3] = { "stra", "strb", "strc" };
//	char *p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s\n", p++);
//		i++;
//	}
//	return 0;
//}

//int fun(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return(p - s);
//	
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//	return 0;
//}


//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int c = 0;
//	int d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//
//	return 0;
//}


//#define sum(a, b, c)  a+b+c
//
//int main()
//{
//	int i = 3;
//	int j = 2;
//	printf("%d\n", i*sum(i, (i + j), j));
//	return 0;
//}


//int func()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	printf("%d\n", (func()));
//	return 0;
//}