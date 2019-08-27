#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//1.有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//void reverse(char* str, char* ptr)
//{
//	assert(str && ptr );
//	while (str < ptr)
//	{
//		char tmp = *str;
//		*str = *ptr;
//		*ptr = tmp;
//		str++;
//		ptr--;
//	}
//}
//void reverse_arr(char* str, int k)
//{
//	char*ptr = str;
//	char*left = str;
//	char*right = str+k-1;
//	assert(str);
//	reverse(left, right);
//	while (*ptr)
//	{
//		left = ptr;
//		while (*ptr != '\0' && *ptr != ' ')
//		{
//			ptr++;
//		}
//		right = ptr - 1;
//		reverse(left, right);
//		if (*ptr == ' ')
//		{
//			ptr++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = strlen(arr);
//	reverse_arr(arr, len);
//	printf("%s ", arr);
//	return 0;
//}

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void sort_arr(int* str, int k)
//{
//	int* ptr = str + k - 1;
//	int tmp = 0;
//	while (str<ptr)
//	{
//		while (*str % 2 != 0)
//		{
//			str++;
//		}
//		while (*ptr % 2 == 0)
//		{
//			ptr--;
//		}
//		if (str < ptr)
//		{
//			tmp = *str;
//			*str = *ptr;
//			*ptr = tmp;
//		}
//	}
//}
//void print(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort_arr(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//void find_num(int* str, int k, int* x, int*y)
//{
//	//异或
//	int tmp = 0;
//	int i = 0;
//	int ptr = 0;
//	for (i = 0; i < k; i++)
//	{
//		tmp ^= str[i];
//	}
//	
//	//计算异或结果中二进制位的哪一位为1
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1 )== 1)
//		{
//			ptr = i;
//			break;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		if (((str[i] >> ptr) & 1) == 1)
//		{
//			*x ^= str[i];
//		}
//	}
//	*y = tmp^(*x);
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int num1 = 0; 
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz, &num1, &num2);
//	printf("%d %d", num1, num2);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	/*while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}*/
//	return ret;
//}
//int main()
//{
//	char arr1[] = "**********************";
//	char arr2[] = "Hello Bit";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//4.模拟实现strcat
//#include<assert.h>
//char* my_strcat(char* str, const char*ptr)
//{
//		char* ret = str;
//		assert(str != NULL);
//		assert(ptr != NULL);
//		while (*str != '\0')
//		{
//			str++;
//		}
//		while (*str = *ptr)
//		{
//			str++;
//			ptr++;
//		}
//		return ret;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}


//6.实现memcpy
//#include<string.h>
//print(int arr[20])
//{
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memcpy(arr1, arr2, 20);
//	print(arr1);
//	return 0;
//}
//void *memcpy( void *dest, const void *src, size_t count );


//#include<string.h>
//void* my_memcpy(void *dest, const void *src, size_t count)
//{
//	assert(dest && src);
//	size_t i = 0;
//	void*ret = dest;
//	for (i = 0; i < count; i++)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//print(int arr2[5])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1,  20);
//	print(arr2);
//	return 0;
//}
//7.实现memmove
//#include<string.h>
//void* my_memmove(void *dest, const void *src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest<src)
//	{
//		//从前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//从后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//
//	}
//	return ret;
//}
//print(int arr[], int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr+2, arr, 20);
//	print(arr, sz);
//	return 0;
//}

//int my_strcmp(const char*str1, const char*str2)
//{
//	int ret = 0;
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//	//if (*str1 > *str2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = 0;
//	ret = my_strcmp(arr1, arr2);
//	printf("%d ", ret);
//	return 0;
//}