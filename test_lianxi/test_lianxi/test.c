#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6
//	//这里的数组名单独放在括号里，表示的是整个数组
//	printf("%d\n", sizeof(arr + 0));//4
//	//这里的数组名没有单独放在括号里
//	//表示的是数组首元素的地址，+0仍表示首元素地址  
//	printf("%d\n", sizeof(*arr));//1
//	//这里的数组名没有单独放在括号里，表示的是数组首元素的地址
//	//首元素的地址解引用表示的是首元素，*arr = arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	//arr[1]表示第二个元素
//	printf("%d\n", sizeof(&arr));//4
//	//&数组名，取出的是数组的地址，地址在32位平台上的大小为4个字节
//	printf("%d\n", sizeof(&arr + 1));//4
//	//&arr是数组的地址,+1则跳过该数组，指向'f'的后面
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//&arr[0]表示第一个元素地址，+1则表示第二个元素地址
//	//·总结 sizeof(地址)在32位平台上的大小均为4个字节
//
//	printf("%d\n", strlen(arr));//大于等于6的随机数
//	//这里的arr表示首元素地址，因为数组里没有'\0'
//	//会一直往后越界找'\0'，遇到'\0'停止
//	printf("%d\n", strlen(arr + 0));//大于等于6的随机数
//	//表示首元素地址
//	//printf("%d\n", strlen(*arr));//error
//	//strlen参数只能传地址，*arr表示的是首元素
//	//printf("%d\n", strlen(arr[1]));//error
//	//arr[1]表示的是第二个元素
//	printf("%d\n", strlen(&arr));//大于等于6的随机数
//	//&arr表示数组的地址，大小与数组首元素地址相同，意义不同
//	printf("%d\n", strlen(&arr + 1));//随机数
//	//&arr表示数组的地址,+1跳过整个数组
//	printf("%d\n", strlen(&arr[0] + 1));//随机数
//	//第二个元素的地址
//	return 0;
//}

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//#include<math.h>
//
//unsigned int reverse_bit(int p)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//ret += ((p >> i) & 1)*pow(2, 31 - i);
//		ret += ((p >> i) & 1)*(1<<(31-i));
//
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	ret = reverse_bit(a);
//	printf("%u ", ret);
//	return 0;
//}

//
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分

void adjust(int arr[10], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		if (arr[left] % 2 != 0)
		{
			left++;
		}
		if (arr[right] % 2 == 0)
		{
			right--;
		}
		else if (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
void print(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	adjust(arr, sz);
	print(arr, sz);
	return 0;
}