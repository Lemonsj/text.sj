#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define ROW 3
#define COL 3
//4.��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reserve_arr(char* str, char*ptr)
//{
//	char* left = str;
//	char* right = ptr;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void fans(char*str, int k)
//{
//	char*ptr = str;
//	char* left = str;
//	char* right = str + k - 1;
//	while (*ptr)
//	{
//		left = ptr;
//		while ((*ptr != ' ') && (*ptr != '\0'))
//		{
//			ptr++;
//		}
//		right = ptr - 1;
//		reserve_arr(left, right);
//		if (*ptr == ' ');
//		{
//			ptr++;
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("ԭ�����ַ���:");
//	printf("%s\n", arr);
//	reserve_arr(arr, arr + len - 1);
//	printf("���ڵ��ַ���:");
//	printf("%s\n", arr);
//	return 0;
//}

//
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int i = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 0;
//	int x = 0;
//	int y = COL-1;
//	scanf("%d", &k);
//	/*while ((x <= 2) && (y >= 0))
//	{
//		if (arr[x][y] == k)
//		{
//			printf("�ҵ��ˣ�\n %d %d", x, y);
//			break;
//		}
//		else if (arr[x][y]<k)
//			x++;
//		else
//			y--;
//	}
//	if ((x>2) || (y < 0))
//	{
//		printf("�Ҳ�����\n");
//	}*/
//
//	while ((x <= 2) && (y >= 0))
//	{
//		if (arr[x][y] == k)
//		{
//			printf("�ҵ��ˣ�\n %d %d", x, y);
//			break;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("�Ҳ�����\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
