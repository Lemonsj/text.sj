#define _CRT_SECURE_NO_WARNINGS 1


//int fans(int x)
//{
//	int count = 0;
//	count = x;
//	while (x >= 2)
//	{
//		count += x / 2;
//		x = x / 2 + x % 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 20;
//	int ret = 0;
//	ret = fans(num);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
//Ä£ÄâÊµÏÖ×Ö·û´®¿½±´
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello World";
//	printf("%s",my_strcpy(arr1, arr2));
//	return 0;
//
//}


//char* my_strncpy(char* dest, char* src, int k)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (k)
//	{
//		*dest++ = *src++;
//		k--;
//	}
//	if (*(dest - 1) != '\0')
//	{
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello World";
//	printf("%s",my_strncpy(arr1, arr2, 3));
//	return 0;
//}


//Ä£ÄâÊµÏÖ×Ö·û´®×·¼Óstrcat

//char* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[10] = "World";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}

//char* my_strstr(const char*s1, const char*s2)
//{
//	const char*p1 = s1;
//  const char*p2 = s2;
//	const char*start = s1;
//	assert(s1 && s2);
//	if (*s2 == '\0')
//	{
//		return (char*)s1;
//	}
//	while (*start != '\0')
//	{
//		p1 = start;
//		p2 = s2;
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
//	printf("%s", my_strstr(arr1, arr2));
//	return 0;
//}

//char* my_strchr(const char*str, char c)
//{
//	const char* ptr = str;
//	assert(str != NULL);
//	while (*ptr)
//	{
//		if (*ptr == c)
//		{
//			return (char*)ptr;
//		}
//		else
//		{
//			ptr++;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", my_strchr(arr, 'c'));
//	return 0;
//}