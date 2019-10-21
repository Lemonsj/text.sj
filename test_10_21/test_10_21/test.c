#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int reseach_num(int *str, int sz, int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		// int mid = (left + right) >> 1;
//		int mid = left + (right - left) / 2;
//		if (str[mid] == n)
//		{
//			return mid;
//		}
//		if (str[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	ret = reseach_num(arr, sz, k);
//	printf("%d\n", ret);
//	return 0;
//}



//import java.util.Scanner;
//
//public class Test {
//	public static void main1(String[] args) {
//		Scanner scan = new Scanner(System.in);
//		System.out.println("input a:");
//		int a = scan.nextInt();
//		System.out.println("input b:");
//		int b = scan.nextInt();
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//		System.out.println("a = " + a);
//		System.out.println("b = " + b);
//	}
//	public static void swap(int[]arr) {
//		int tmp = 0;
//		tmp = arr[0];
//		arr[0] = arr[1];
//		arr[1] = tmp;
//
//	}
//	public static void main(String[] args) {
//		Scanner scan = new Scanner(System.in);
//		int arr[] = { 10, 20 };
//		swap(arr);
//		System.out.println(arr[0]);
//		System.out.println(arr[1]);
//		scan.close();
//	}
//
//}

	/*public class Test {
	public static void main(String[] args) {
	int a = 3;
	int b = 1;
	int c = 2;
	int t = 0;
	if(a>b) {
	t = a;
	a = b;
	b = t;
	}
	if(a>c) {
	t = a;
	a = c;
	c = t;
	}
	if(b>c) {
	t = c;
	c = b;
	b = t;
	}
	System.out.println(c);
	System.out.println(a);
	}
	}*/








