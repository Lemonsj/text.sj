#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str != '\0')
//	{
//		str++;
//		count = 1 + my_strlen(str);
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count = 1 + my_strlen(str);
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			printf("%d\n", i);
		}
		
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
