#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a + b) / 2.0;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = a - (a - b) / 2.0;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a + b) >> 1;
	printf("ave = %lf", ave);
	system("pause");
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	float ave = 0.0;
	scanf("%d%d", &a, &b);
	ave = (a&b) + (a^b) / 2;
	printf("aver = %lf", ave);
	system("pause");
	return 0;
}
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

int fib(int n)
{
	if (n <= 2)  return 1;
	else return fib(n - 1) + fib(n - 2);

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d ", ret);
	system("pause");
	return 0;
}

int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	scanf("%d", &n);
	if (n <= 2) return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	printf("%d ", c);
	system("pause");
	return 0;
}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
int Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n*Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	scanf("%d%d", &n, &k);
	ret = Pow(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
		return  DigitSum(n / 10) + n % 10;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d ", ret);
	system("pause");
	return 0;
}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
void reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello world";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}