#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//char* replace(char* str, int sz)
//{
//	assert(str != NULL);
//	char* dest = str;
//	int i = sz - 1;
//	int j = 0;
//	int count = 0;
//	while (i>=0)
//	{
//		if (str[i] == ' ')
//		{
//			for (j = sz; j >= i; j--)
//			{
//				str[j + 2] = str[j];
//			}
//			str[i] = '%';
//			str[i + 1] = '2';
//			str[i + 2] = '0';
//			sz += 2;
//		}
//		i--;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr[50] = "abc def xyz";
//	int sz = strlen(arr);
//	printf("%s\n", replace(arr, sz));
//	return 0;
//}



//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d\n", a - 10);
//	}
//	else
//	{
//		printf("%d\n", a++);
//	}
//	return 0;
//}


//int main()
//{
//	int x = 2;
//	int z = 2;
//	int y = 3;
//	if (x > y)
//	{
//		z = 1;
//	}
//	else if (x == y)
//	{
//		z = 0;
//	}
//	else
//	{
//		z = -1;
//	}
//	printf("%d\n", z);
//	return 0;
//}

//int main()
//{  
//	char a1[] = "Hello\0world";
//	char a2[15] = { 0 };
//	int c = 0;
//	int d = 0;
//	strcpy(a2, a1);
//	c = strlen(a2);
//	d = sizeof(a1);
//	printf("%d %d\n", c, d);
//	return 0;
//}

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("%d\n", c);
	}
	else
	{
		for (i = 0; i < n - 2; i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		printf("%d\n", c);
	}
	return 0;
}
//int fab(n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fab(n - 1) + fab(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fab(n));
//	return 0;
//}