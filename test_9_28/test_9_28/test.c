#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a[] = "abcdef"; 
//	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int x = 0;
//	int y = 0;
//	x = strlen(a);
//	y = strlen(b);
//
//	printf("%d  %d\n", x, y); 
//	return 0;
//}

//int main()
//{ 
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//int main()
//{
//	 
//	int s = 0;
//	int n = 0;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default: s += 4;
//		case 1: s += 1;
//		case 2: s += 2;
//		case 3: s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}



//int main()
//{
//	char *pcColor = "blue1";
//	char acColor[] = "blue1";
//	printf("%d\n", strlen(pcColor));
//	printf("%d\n", strlen(acColor));
//	printf("%d\n", sizeof(pcColor));
//	printf("%d\n", sizeof(acColor));
//	return 0;
//}

//int main()
//{
//	unsigned long ulA = 0x11000000;
//	printf("%x\n", *(unsigned char*)&ulA);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	int sz = 0;
//	int count[9] = {0};
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int max = 0;
//	sz = sizeof(arr);
//	while (sz)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			if (arr[j] == arr[i])
//			{
//				count[j]++;
//			}
//		}
//	}
//	max = count[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (count[i] > max)
//		{
//			tmp = count[i];
//			count[i] = max;
//			max = tmp;
//		}
//	}
//	if (max > (sz/2))
//	printf("%d\n", max);
//	
//	return 0;
//}