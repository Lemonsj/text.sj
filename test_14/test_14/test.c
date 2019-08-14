#define _CRT_SECURE_NO_WARNINGS 1

#include"add.h"
#include<stdio.h>

#pragma comment(lib,"add.lib")
int main()
{
	int a = 20;
	int b = 10;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}