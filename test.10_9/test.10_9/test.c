#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//
//char* my_strcat(char*str1, char*str2)
//{
//	char*p = str1;
//	for (; *str1 != '\0';)
//	{
//		str1++;
//	}
//	for (; *str2 != '\0';)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//	return p;
//}
//int main()
//{
//	char s1[20] = "abcd";
//	char s2[20] = "efghij";
//	my_strcat(s1, s2);
//	printf("%s\n", my_strcat(s1, s2));
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//
//{
//
//	
//	char a[10];
//	char *p = a;
//	char *s = p;
//	printf("input a:");
//
//	scanf("%s", a);
//
//	for (p = a; *p != '\0'; p++);
//	char *q;
//	char b[10];
//
//	printf("input b:");
//
//	scanf("%s", b);
//	q = b;
//	while (*q != '\0')
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = '\0';
//
//	printf("\nThe new string is:%s\n", s);
//	system("pause");
//	return 0;
//
//}
