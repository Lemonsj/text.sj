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
//2.ʹ�ú���ʵ���������Ľ�����
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

//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
//	printf("������ѡ��\n");
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
//	printf("������ѡ��\n");
//}
//
//void reverse(int arr[])
//{
//	int i = 0;
//	printf("���ú�����Ϊ");
//	for (i = 9; i >=0; i--)
//		printf("%d ", arr[i]);
//	printf("������ѡ��\n");
//}
//void menu()
//{
//	printf("***************<����>*****************\n");
//	printf("************1.��ʼ������**************\n");
//	printf("************2.�������****************\n");
//	printf("************3.��������****************\n");
//	printf("************4.��   ��******************\n");
//}
//int main()
//{
//	int arr[10];
//	menu();
//	printf("������ѡ��");
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
//5.ʵ��һ���������ж�һ�����ǲ���������
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//		printf("��������");
//	}
//	else
//		printf("����������");
//	
//	system("pause");
//	return 0;
//}
//Day 6
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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

//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//		printf("�����꣡\n");
//	}
//	else printf("�������꣡\n");
//	system("pause");
//	return 0;
//}
