#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832


//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//unsigned int reverse_bit(unsigned int x)
//{
//	int i = 0;
//	int arr[32] = { 0 };
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i) & 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//	}
//	for (i = 0; i < 32; i++)
//	{
//		sum += arr[i] * (unsigned int)pow(2, 31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������һ����:>");
//	scanf("%d", &n);
//	ret = reverse_bit(n);
//	printf("%u ", ret);
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a + (b - a) / 2;
//	printf("%d ", c);
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//
//int main()
//{
//	int arr[7] = { 1, 2, 3, 4, 1, 2, 3 };
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d ", ret);
//	return 0;
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//void reserve_arr(char* str, int k)
//{
//	int left = 0;
//	int right = k - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void fans(char* str)
//{
//	if (*str != '\0')
//	{
//		char *p = str;
//		while (*p != ' ')
//		{
//			str++;
//		}
//		reserve_arr(p, str - 1);
//		p++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = 0;
//	int i = 0;
//	len = strlen(arr);
//	printf("ԭ�ַ�����: %s\n", arr);
//	reserve_arr(arr, len);
//	printf("%s", arr);
//	return 0;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char *left, char *right)
//{
//	char tmp;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void ReverseStr(char *str)
//{
//	char *left = str;
//	char *right = str + MyStrlen(str) - 1;
//	char *cur = str;
//	reverse(left, right);
//	while (*cur != '\0')
//	{
//		char *start = cur;
//		while (*cur != ' '&&*cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		if (*cur == ' ')
//		{
//			cur++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	ReverseStr(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}











