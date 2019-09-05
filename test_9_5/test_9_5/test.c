#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
//student a am I
//void reverse_arr(char* str, char* ptr)
//{
//	assert(str && ptr);
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
//void reverse(char*str, int k)
//{
//	assert(str != NULL);
//	char*left = str;
//	char*right = str + k - 1;
//	char* ptr = str;
//	reverse_arr(left, right);
//	while (*ptr)
//	{
//		left = ptr;
//		while (*ptr != ' ' && *ptr != '\0')
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
//}
//int main()
//{
//	char arr[] = "student a am I";
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

//register ÉùÃ÷¼Ä´æÆ÷±äÁ¿

//static int j;
//void fun1()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//void fun2()
//{
//	j = 0;
//	j++;
//}
//int main()
//{
//	int k = 0;
//	for (k = 0; k<10; k++)
//	{
//		fun1();
//		fun2();
//	}
//	printf("\n");
//	printf("%d", j);
//	return 0;
//}


//int main()
//{
//	int*p = NULL;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//int main()
//{
//	int a[100] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[100]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(&a[0]));
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%u\n", i + j);
//	return 0;
//}







