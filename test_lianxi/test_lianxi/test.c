#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6
//	//��������������������������ʾ������������
//	printf("%d\n", sizeof(arr + 0));//4
//	//�����������û�е�������������
//	//��ʾ����������Ԫ�صĵ�ַ��+0�Ա�ʾ��Ԫ�ص�ַ  
//	printf("%d\n", sizeof(*arr));//1
//	//�����������û�е��������������ʾ����������Ԫ�صĵ�ַ
//	//��Ԫ�صĵ�ַ�����ñ�ʾ������Ԫ�أ�*arr = arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	//arr[1]��ʾ�ڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));//4
//	//&��������ȡ����������ĵ�ַ����ַ��32λƽ̨�ϵĴ�СΪ4���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4
//	//&arr������ĵ�ַ,+1�����������飬ָ��'f'�ĺ���
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//&arr[0]��ʾ��һ��Ԫ�ص�ַ��+1���ʾ�ڶ���Ԫ�ص�ַ
//	//���ܽ� sizeof(��ַ)��32λƽ̨�ϵĴ�С��Ϊ4���ֽ�
//
//	printf("%d\n", strlen(arr));//���ڵ���6�������
//	//�����arr��ʾ��Ԫ�ص�ַ����Ϊ������û��'\0'
//	//��һֱ����Խ����'\0'������'\0'ֹͣ
//	printf("%d\n", strlen(arr + 0));//���ڵ���6�������
//	//��ʾ��Ԫ�ص�ַ
//	//printf("%d\n", strlen(*arr));//error
//	//strlen����ֻ�ܴ���ַ��*arr��ʾ������Ԫ��
//	//printf("%d\n", strlen(arr[1]));//error
//	//arr[1]��ʾ���ǵڶ���Ԫ��
//	printf("%d\n", strlen(&arr));//���ڵ���6�������
//	//&arr��ʾ����ĵ�ַ����С��������Ԫ�ص�ַ��ͬ�����岻ͬ
//	printf("%d\n", strlen(&arr + 1));//�����
//	//&arr��ʾ����ĵ�ַ,+1������������
//	printf("%d\n", strlen(&arr[0] + 1));//�����
//	//�ڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
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
//	printf("������һ������");
//	scanf("%d", &a);
//	ret = reverse_bit(a);
//	printf("%u ", ret);
//	return 0;
//}

//
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��

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