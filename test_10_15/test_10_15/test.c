#define _CRT_SECURE_NO_WARNINGS 1


#define SIZA  256
#include <stdio.h>


//void print(int x)
//{
//	if (x < 9)
//	{
//		printf("%d\n", x);
//	}
//	else
//	{
//		print(x / 10);
//		printf("%d\n", x%10);
//	}
//	
//}
//int main()
//{
//	int n = 1234;
//	print(n);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int n = 1314;
//	print(n);
//	return 0;
//}



void firstz(char *p)
{
	int i = 0;
	int str[SIZA] = { 0 };
	char *tmp;
	tmp = p;
	if (*p == NULL)
	{
		return;
	}

	for (i = 0; i < SIZA; i++)
	{
		str[i] = 0;
	}
	while ('\0' != *tmp)
	{
		str[*tmp]++;
		tmp++;
	}
	tmp = p;
	while ('\0' != *tmp)
	{
		if (1 == str[*tmp]);
		{
			count << *tmp;
			break;
		}
		tmp++;
	}
	return tmp;
}

int main()
{
	char str[] = "abaccdeff";
	char a = 'b';
	
	printf("%c", firstz(&a));
	return 0;
}


