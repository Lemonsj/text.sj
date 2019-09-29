#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//—°‘Ò≈≈–Ú

//int main()
//{
//	int arr[] = { 1, 4, 2, 6, 8, 3, 9, 5, 0, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = i+1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp; 
//			}
//		}
//	}
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//√∞≈›≈≈–Ú

//int main()
//{
//	int arr[] = { 1, 4, 2, 6, 8, 3, 9, 5, 0, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int mid = sz / 2;
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[mid] == arr[i])
//		{
//			count++;
//		}
//	}
//	if (count > mid)
//	{
//		printf("%d\n", arr[mid]);
//	}
//	return 0;
//}