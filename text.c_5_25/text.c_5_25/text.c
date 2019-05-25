#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<Windows.h>
//
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//
//	}
//	system("pause");
//	return 0;
//}

//int* fun()
//{
//	int tmp = 10;
//int main()
//	return &tmp;
//}
//{
//	fun();
//	system("pause");
//	return 0;
//}


//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a != b && a != c && a != d && a != e && b != c &&b != d && b != e && c != d && c != e && d != e)
//						{
//							if ((2 == b && 3 != a) || (2 != b && 3 == a))
//							  if ((2 == b && 4 != e) || (2 != b && 4 == e))
//							    if ((1 == c && 2 != d) || (1 != c && 2 == d))
//							      if ((5 == c && 3 != d) || (5 != c && 3 == d))
//							        if ((4 == e && 1 != a) || (4 != e && 1 == a))
//							        {
//								         printf("a=%d b=%d c=%d d=%d e=%d ", a, b, c, d, e);
//										 printf(" ");
//							         }
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。


//int main()
//{
//	int a=0, b=0, c=0, d=0;
//	for(a = 0; a < 2; a++)
//		for(b = 0; b < 2;b++)
//		    for(c = 0; c < 2;c++)
//		        for(d = 0; d < 2;d++)
//	            {
//			        if(0 == a && 1 == c && 1 == d && 0 != d && a + b + c + d == 1)
//				         printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//					if (0 == a && 1 == c && 1 != d && 0 == d && a + b + c + d == 1)
//						printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//					if(0 == a && 1 != c && 1 == d && 0 == d && a + b + c + d == 1)
//						printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//					if(0 != a && 1 == c && 1 == d && 0 == d && a + b + c + d == 1)
//						printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//				}
//	system("pause");
//	return 0;
//}
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1

//#define N 10
//int main()
//{
//	i = 0;
//	j = 0;
//	int arr[N][N] = {0];
//	//先打印每一行的第一个和最后一个
//	for (i = 0; i <= N; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	//打印中间部分
//	for (i = 2; i <= N; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%2d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;

//void Print_(int x)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = (x >> i) & 1;
//		printf("%d", ret);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Print_(m);
//	system("pause"); 
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0;
	scanf("%d%d", &a, &b);
	ave = (a&b) + (a^b) / 2.0; 
	//ave = (float)((a + b) >> 1);
	printf("ave = %f", ave);
	system("pause");
	return 0;
}

