#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j < i; j++)
//		{
//			flag = 1;
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			flag = 1;
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0; 
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d ", i);
//			}
//
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause"); 
//	return 0;
//}


//int main()
//{  
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 12;
//	int b = 16;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 12;
//	int b = 16;
//	/*a = a^b;
//	b = a^b;
//	a = a^b;*/
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int t = 0;
//	if (a < b)
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	if (a < c)
//	{
//		t = c;
//		c = a;
//		a = t;
//	}
//	if (b < c)
//	{
//		t = c;
//		c = b;
//		b = t;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		t = b;
//	}
//	else t = a;
//	while (a % t != 0 || b % t != 0)
//		t--;
//	printf("%d ", t);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 3, 2, 4, 0, 5, 8, 6, 9, 7 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 1; j < 9; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				i = j;
//			}
//			
//		}
//	}
//	printf("%d ", tmp);
//	system("pause");
//	return 0;
//}


