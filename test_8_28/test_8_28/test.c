#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////模拟strstr
//
//char* my_strstr(const char*str1, const char*str2)
//{
//	const char*p1 = str1;
//	const char*p2 = str2;
//	const char*start = str1;
//	if (*p2 == ' ')
//	{
//		return (char*)p1;
//	}
//	while (*start)
//	{
//		p1 = start;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cde";
//	printf("%s ", my_strstr(arr1, arr2));
//	return 0;
//}

//模拟实现memcpy
#include<assert.h>
//void* my_memcpy( char*dest, const char*src, size_t k)
//{
//	size_t i = 0;
//	assert(dest && src);
//	char* ret = dest;
//	for (i = 0; i < k; i++)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[8] = { 0 };
//	char arr2[] = "abcdefg";
//	printf("%s ",my_memcpy(arr1, arr2, 6));
//	return 0;
//}

//void *memmove(void *dest, const void *src, size_t count);


//#include<string.h>
//void print(int arr[], int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr + 2, arr, 16);
//	print(arr, sz);
//	return 0;
//}