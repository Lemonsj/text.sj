#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

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
#include<math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32; i++)
	{
		//ret += (value >> i)*pow(2, 31 - i);
		ret += (((value >> i) & 1) *(1 << (31 - i)));

	}
	return ret;
}
int main()
{
	int a = 0;
	printf("������һ����:>");
	scanf("%d", &a);
	printf("%u\n", reverse_bit(a));
	return 0;
}


