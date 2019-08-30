#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现mememove函数 
//void *memmove( void *dest, const void *src, size_t count );


//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//前->后
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	//后->前
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//void print(int arr[], int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr + 2, arr, 16);
//	print(arr, sz);
//	return 0;
//}


//void qsort(void *base,
//	size_t num,
//	size_t width,
//	int(__cdecl *compare)(const void *elem1, const void *elem2));
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
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
//void print(int arr[], int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void bubble_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}

//1.模拟实现strncpy
//2.模拟实现strncat
//3.模拟实现strncmp
//char* my_strncpy(char*dest, char* src, size_t k)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (k--)
//	{
//		*dest++ = *src++;
//	}
//	if (*(dest - 1) != '\0')
//	{
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "abcdef";
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//
//}
//char* my_strncat(char* dest, char* src, size_t k)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (k--)
//	{
//		*dest++ = *src++;
//	}
//	if (*(dest - 1) != '\0')
//	{
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strncmp(const char* str1, const char* str2, int k)
//{
//	assert(str1 && str2);
//	if (!k)
//	{
//		return 0;
//	}
//	while (--k && *str1 && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = 0;
//	int k = 0;
//	scanf("%d", &k);
//	ret = my_strncmp(arr1, arr2, k);
//	printf("%d ", ret);
//	return 0;
//}