#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//Ä£ÄâÊµÏÖstrstr
char* my_strstr(const char*s1, const char*s2)
{
	const char*p1 = s1;
    const char*p2 = s2;
	const char*start = s1;
	assert(s1 && s2);
	if (*s2 == '\0')
	{
		return (char*)s1;
	}
	while (*start != '\0')
	{
		p1 = start;
		p2 = s2;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cde";
	printf("%s", my_strstr(arr1, arr2));
	return 0;
}