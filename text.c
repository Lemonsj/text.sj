#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//int print()
//{
//	int i = 0, j = 0;
//	int n = 0, m = 0;
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			m = i*j;
//			printf("%d*%d=%d ", i, j, m);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	print();
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0,j = 0;
//	int m = 0,n = 0;
//	scanf("%d", &m);
//	n = m / 2 + 1;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	  
//	}
//	for (i = n - 1; i >= 1; i--)
//	{
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0,j = 0, k = 0, m = 0;
//	for (m = 100; m < 1000; m++)
//	{
//		i = m%10;
//		j = (m / 10) % 10;
//		k = m / 100;
//		if (m == i*i*i + j*j*j + k*k*k)
//		{
//			printf("%d ", m);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int k = 0;
//	int i = 2; 
//	int n = 2, m = 2;
//	for (k = 1; k < 5; k++)
//	{
//		n = n * 10 + i;
//		m += n;
//	}
//	printf("%d", m);
//	system("pause");
//	return 0;
//}
//2.使用函数实现两个数的交换。
//#include<stdio.h>
//#include<stdlib.h>
//void Swap(int *x,int *y)
//{
//	int m = *x;
//	*x = *y;
//	*y = m;
//}
//int main()
//{ 
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			printf("%c\n",ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			;
//		}
//	}
//	system("pause");
//	return 0;
//}

//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。
//#include<stdio.h>
//#include<stdlib.h>
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%d", &arr[ i ]);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("请输入选择：\n");
//}
//void empty(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("请输入选择：\n");
//}
//
//void reverse(int arr[])
//{
//	int i = 0;
//	printf("逆置后数组为");
//	for (i = 9; i >=0; i--)
//		printf("%d ", arr[i]);
//	printf("请输入选择：\n");
//}
//void menu()
//{
//	printf("***************<数组>*****************\n");
//	printf("************1.初始化数组**************\n");
//	printf("************2.清空数组****************\n");
//	printf("************3.数组逆置****************\n");
//	printf("************4.结   束******************\n");
//}
//int main()
//{
//	int arr[10];
//	menu();
//	printf("请输入选择：");
//	int n;
//	scanf("%d", &n);
//	while (1)
//	{
//		switch (n)
//		{
//		case 1:
//			init(arr);
//			break;
//		case 2:
//			empty(arr);
//			break;
//		case 3:
//			reverse(arr);
//			break;
//		case 4:
//			return 0;
//		default:
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//#include<stdlib.h>
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= x; i++)
//	{
//		if (x%i == 0)
//			return 0;
//		else
//			return 1;
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (is_prime(m))
//	{
//		printf("是素数！");
//	}
//	else
//		printf("不是素数！");
//	
//	system("pause");
//	return 0;
//}
//Day 6
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#include<stdlib.h>
//int print()
//{
//	int i = 0, j = 0;
//	int n = 0, m = 0;
//	scanf("%d", &n);
//	f0r(i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			m = i*j;
//			printf("%d*%d=%2d", i, j, m);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	print();
//	system("pause");
//	return 0;
//}

//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//#include<stdlib.h>
//int leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (leap_year(n))
//	{
//		printf("是闰年！\n");
//	}
//	else printf("不是闰年！\n");
//	system("pause");
//	return 0;
//}
