#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//

//void left_move(char* str, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//void left_move(char* str, int k)
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		for (j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	left_move(arr, k);
//	printf("旋转后的字符串：");
//	printf("%s\n", arr);
//	return 0;

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

//int main()
//{
//	char arr1[] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int len = strlen(arr1);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *arr1;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr1) == 0)
//		{
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//
//}




//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}i[
//void reserve_arr(char* str, char* ptr)
//{
//	char* left = str;
//	char* right = ptr;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reserve(char*str, int k)
//{
//	char *ptr = str;
//	char* left = str;
//	char* right = str + k - 1;
//	while (*ptr)
//	{
//		left = ptr;
//		reserve_arr(left, right);
//		while (*ptr != ' ' && *ptr != '\0')
//		{
//			ptr++;
//		}
//		right = ptr - 1;
//		reserve_arr(left, right);
//
//		if (*ptr == ' ')
//		{
//			ptr++;
//		}
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = my_strlen(arr);
//	printf("原来的字符串是:");
//	printf("%s\n", arr);
//	reserve(arr, len);
//	printf("现在的字符串是:");
//	printf("%s\n", arr);
//	return 0;
//}


//void bubble_sort(int* str, int k)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < k - 1 - i; j++)
//		{
//			if (str[j]>str[j + 1])
//			{
//				int tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//void print_arr(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr, sz);
//	return 0;
//}
//void qsort( void *base, 
//size_t num, size_t width,
//int (__cdecl *compare )(const void *elem1, const void *elem2 ) );


//#include<stdlib.h>
//#include<string.h>
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print_arr(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width, (char*)base+width*(j+1)) >0)
//			{
//				Swap((char*)base + j*width, (char*)base + width*(j + 1), width);
//			}
//		}
//	}
//}
//void test1()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
////int cmp_name(const void*e1, const void*e2)
////{
////	return  strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
////}
////void test2()
////{
////	int i = 0;
////	struct Stu arr[3] = { { "zhangsan", 10 }, { "lisi", 20 }, { "wangwu", 15 } };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	qsort(arr, sz, sizeof(arr[0]), cmp_name);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%s\n", arr[i].name);
////	}
////}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}