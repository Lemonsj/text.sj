#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//void reverse_arr(char* str, char* ptr)
//{
//	assert(str && ptr);
//	char tmp = 0;
//	char* left = str;
//	char* right = ptr;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str, int k)
//{
//	assert(str != NULL);
//	char* ptr = str;
//	char* left = str;
//	char* right = str + k-1;
//	reverse_arr(left, right);
//	while (*ptr)
//	{
//		left = ptr;
//		while (*ptr != '\0' && *ptr != ' ')
//		{
//			ptr++;
//		}
//		right = ptr - 1;
//		reverse_arr(left, right);
//		if (*ptr == ' ')
//		{
//			ptr++;
//		}
//	}
//	
//}
//int main()
//{
//
//	char arr[] = "student a am I";
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}


//void find_num(int str[], int k, int* x, int* y)
//{
//	int tmp = 0;
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < k; i++)
//	{
//		tmp ^= str[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			n = i;
//			break;
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		if (((str[i] >> n)&1) == 1)
//		{
//			(*x) ^= str[i];
//		}
//	}
//	*y = tmp^(*x);
//}
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_num(arr, sz, &num1, &num2);
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

//模拟实现strstr
//char* find_str(const char* dest, const char* src)
//{
//	assert(dest && src);
//	const char*p1 = dest;
//	const char*p2 = src;
//	const char*start = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	/*while (*dest == *src)
//	{
//		dest++;
//		src++;
//		if (*dest == '\0')
//		{
//			return start;
//		}
//	}*/
//	while (*start != '\0')
//	{
//		p1 = start;
//		p2 = src;
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
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", find_str(arr, "cde"));
//	return 0;
//}
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	const char* p1 = dest;
//	const char* p2 = src;
//	const char* start = p1;
//	if (p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*start != '\0')
//	{
//		p1 = start;
//		p2 = src;
//		while(*p1 && *p2 && *p1 == *p2)
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
//	char arr[] = "abbbcdef";
//	printf("%s\n", my_strstr(arr, "bbc"));
//	return 0;


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABnt 
//int Check(char* str1, char*str2)
//{
//	int len = strlen(str1);
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;
//		for (j = 0; j < len-1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = 0;
//	ret = Check(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}














//}