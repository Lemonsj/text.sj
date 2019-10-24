#define _CRT_SECURE_NO_WARNINGS 1
//
///*public class Test {
//public static int search_num(int[] str, int n) {
//int left = 0;
//int right = str.length-1;
//while(left<right) {
//int mid = (left+right)>>1;
//if(str[mid] == k)
//{
//return 1;
//}else if(str[mid] > k) {
//mid = right - 1;
//}else {
//mid = left + 1;
//}
//
//}
//return -1;
//}
//public static void main(String[] args) {
//int[] array = new int[] {{1,2,3},{4,5,6},{7,8,9}};
//int k = 7;
//int ret = 0;
//ret = search_num(array, k);
//if(ret == 1) {
//system.out.println("zhaodaole");
//}else {
//system.out.println("zhaobudao");
//}
//}
//}*/
//
//public class Test {
//	public static boolean search_num(int[][]str, int n) {
//		int col = str[0].length;
//		int row = str.length;
//		int i = 0;
//		int j = col - 1;
//		while (i<row && j >= 0) {
//			if (str[i][j] == n) {
//				return true;
//			}
//			else if (str[i][j] > n) {
//				j--;
//			}
//			else {
//				i++;
//			}
//		}
//		return false;
//	}
//	public static void main(String[] args) {
//		int[][] array = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//		int k = 7;
//		boolean ret = false;
//		ret = search_num(array, k);
//		System.out.println(ret);
//	}
//
//}
//
//
//
//


#include<stdio.h>
#include<assert.h>

char * replace(char*str, int sz)
{
	assert(str != NULL);
	char* dest = str;
	int i = sz - 1;
	int j = 0;
	int count = 0;
	while (i >= 0)
	{
		if (str[i] == ' ')
		{
			for (j = sz; j >= i; j--)
			{
				str[j + 2] = str[j];
			}
			str[i] = '%';
			str[i + 1] = '2';
			str[i + 2] = '0';
			sz += 2;
		}
		i--;
	}
	return dest;
}