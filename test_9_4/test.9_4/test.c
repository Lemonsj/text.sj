#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>

//屏幕——标准输出流
//键盘——标准输入流
//顺序写文件

//int main()
//{    
//	/*FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('H', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	fclose(pf);
//	pf = NULL;*/
//
//	//fputc('w', stdout);
//
//	return 0;
//}   


//int main()
//{
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//
//	//读文件
//
//	fgets(buf, 20, pf);
//	printf("%s\n", buf);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//	//ch = fgetc(pf);
//	//putchar(ch);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//
//	//读文件
//
//	fputs("Hello bit", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int fprintf( FILE *stream, const char *format [, argument ]...);


//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三 ", 20, 55.5f };
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = {0};
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三", 0, 55.5f};
//	int ch = 0;
//	char buf[20] = { 0 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



