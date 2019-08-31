#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity+2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}
void LoadContact(Contact* pcon)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("Contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
		return;
	}
	//������Ϣ
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(Contact*  pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->data == NULL)
	{
		printf("%s\n", strerror);
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	//�����ļ�
	LoadContact(pcon);
}
void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
//void AddContact(Contact*  pcon)
//{
//	if (pcon->sz < Max)
//	{
//		printf("������������>");
//		scanf("%s", pcon->data[pcon->sz].name);
//		printf("���������䣺>");
//		scanf("%d", &pcon->data[pcon->sz].age);
//		printf("�������ձ�>");
//		scanf("%s", pcon->data[pcon->sz].sex);
//		printf("������绰��>");
//		scanf("%s", pcon->data[pcon->sz].phone);
//		printf("�������ַ��>");
//		scanf("%s", pcon->data[pcon->sz].addr); 
//		pcon->sz++;
//	}
//	else
//	{
//		printf("ͨѶ¼�������޷����\n");
//	}
//}

void AddContact(Contact* pcon)
{
	assert(pcon);

	CheckCapacity(pcon);

	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->sz].phone);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}
void ShowContact(Contact*  pcon)
{
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-15s\n","����", "����", "�ձ�", "�绰", "��ַ");
	for (i = 0; i <pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-15s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].phone,
			pcon->data[i].addr);
	}
}

static int FindPeo(Contact* pcon, char* name)
{
	int i = 0;
	
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
	
}
void DelContact(Contact* pcon)
{
	int ret = 0;
	int i = 0;
	char name[Name_Max] = { 0 };
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	ret = FindPeo(pcon, name);
	if (ret != -1)
	{
		for (i = ret; i < pcon->sz-1; i++)
		{
			pcon->data[i] = pcon->data[i + 1];
		}
	}
	printf("ɾ���ɹ�!\n");
}

void SearchContact(Contact* pcon)
{
	int ret = 0;
	char name[Name_Max] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	ret = FindPeo(pcon, name);
	if (-1 == ret)
	{
		printf("Ҫ���ҵ��˲�����!\n");
	}
	else
	{
		ShowContact(pcon);
	}
	
}

void ModifyContact(Contact* pcon)
{
	int ret = 0;
	char name[Name_Max] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	ret = FindPeo(pcon, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����!\n");
	}
	else
	{
		printf("������������>");
		scanf("%s", pcon->data[ret].name);
		printf("���������䣺>");
		scanf("%d", &pcon->data[ret].age);
		printf("�������ձ�>");
		scanf("%s", pcon->data[ret].sex);
		printf("������绰��>");
		scanf("%s", pcon->data[ret].phone);
		printf("�������ַ��>");
		scanf("%s", pcon->data[ret].addr);
	}
	printf("�޸ĳɹ�!\n");
}
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
		
}
void SortContact(Contact* pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
}
void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("������Ϣ�����ļ�ʧ��\n");
		return;
	}
	//������Ϣ
	for (i = 0; i<pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}

	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
}