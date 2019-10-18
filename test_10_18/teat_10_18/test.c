#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int x = 0;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d  %d\n", a, x);
//
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p1 = (int*)(&a + 1);
//	//&a, 这里的a表示的是整个数组
//	int *p2 = (int*)((int)a + 1);
//	//2
//	int *p3 = (int*)(a + 1);
//	//3
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);
//
//	//1, 2, 3
//	return 0;
//}


//char *mystring()
//{
//	char buffer[6] = { 0 };
//	char *s = "hello world!";
//	int i = 0;
//	for (i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", mystring());
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//		//char (-128 ~  127)
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	printf("%d, %d\n", sizeof(i++), i);
//	//4   1
//	return 0;
//}



//int fun(char*s)
//{
//	char *p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return (p - s);
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//	return 0;
//}